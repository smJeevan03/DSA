

/*

for (r = 0; r < n; r++) {
    add nums[r] to window state;
    while (<shrink condition>) {
        remove nums[l]; l++;
    }
    <record answer>; 
}


Outer loop always expands right. Inner while always shrinks left. What changes is when you shrink and where you record.

Variant 1 — Minimum window 
Shrink while the window is valid, record inside the while:

for (int r = 0; r < n; r++) {
    sum += nums[r];
    while (sum >= target) {              // valid → try smaller
        best = min(best, r - l + 1);     // record BEFORE shrinking
        sum -= nums[l++];
    }
}
"As soon as it's good enough, save it and try to make it smaller"


Variant 2 — Maximum window
Shrink while the window is INVALID, record after the while (window is now the largest valid one ending at r):

for (int r = 0; r < n; r++) {
    add nums[r];
    while (window invalid) {             // e.g. duplicate, > K distinct, > K flips
        remove nums[l]; l++;
    }
    best = max(best, r - l + 1);         // record AFTER shrinking
}


"Break the rule, shrink until you're legal again, then the legal window is your candidate."




"The rule of thumb"

Want	                                 Shrink while…	                 Record
Shortest window meeting condition	    window is valid	            inside the while
Longest window meeting condition	    window is invalid	        after the while

It's the same skeleton — you're just asking "shrink while good" vs "shrink while bad."


for Fixed sized window

for (int r = 0; r < n; r++) {
    add nums[r];
    if (r >= k) remove nums[r - k];   // drop the element leaving the window
    if (r >= k - 1) record answer;
}

No inner loop at all.



The three patterns

Pattern A — Fixed-size window

for (int r = 0; r < n; r++) {
    add(nums[r]);
    if (r >= k) remove(nums[r - k]);     // element leaving the window
    if (r >= k - 1) record();            // window is full
}


Pattern B — Variable window, shrink while VALID → find MINIMUM

int l = 0;
for (int r = 0; r < n; r++) {
    add(nums[r]);
    while (window_is_valid()) {          // good → record, then shrink
        best = min(best, r - l + 1);     // RECORD INSIDE the while
        remove(nums[l++]);
    }
}


Pattern C — Variable window, shrink while INVALID → find MAXIMUM

int l = 0;
for (int r = 0; r < n; r++) {
    add(nums[r]);
    while (!window_is_valid()) {         // bad → shrink until legal
        remove(nums[l++]);
    }
    best = max(best, r - l + 1);         // RECORD AFTER the while
}






*/