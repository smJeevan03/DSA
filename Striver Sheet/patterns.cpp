// #include<bits/stdc++.h>

#include<iostream>
using namespace std;

//p1
void p1(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

// p2
void p2(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

// p3
void p3(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

// p4
void p4(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}

// p5
void p5(int n){
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

// p6
void p6(int n){
    for(int i=n;i>=0;i--){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

// bonus
void bonus1(int n){
    for(int i=0;i<n;i++){
        //spaces
        for(int j=0;j<=n-i-1;j++){
            cout<<"  ";
        }
        for(int j=0;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}


// p7
void p7(int n){
    for(int i=0;i<n;i++){
        //spaces
        for(int j=0;j<=n-i-1;j++){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

// p8
void p8(int n){
    for(int i=n;i>=0;i--){
        //spaces
        for(int j=0;j<=n-i-1;j++){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

// p9
void p9(int n){
    for(int i=0;i<n;i++){
        //spaces
        for(int j=0;j<=n-i-1;j++){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=n;i>=0;i--){
        //spaces
        for(int j=0;j<=n-i-1;j++){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}


// p10
void p10(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=n;i>=0;i--){
        for(int j=0;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

// p11
void p11(int n){
    for(int i=1;i<=n;i++){
        int st=i%2;
        for(int j=0;j<i;j++){
            cout<<st<<" ";
            st=1-st;
        }
        cout<<endl;
    }
}

//p12
void p12(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        // spaces = total width - printed digits
        //  sp = 2n - 2i = 2*(n-i)
        for(int j=1;j<=2*(n-i);j++){
            cout<<"  ";
        }
        for(int j=i;j>=1;j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

void p13(int n){
    int c=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<c<<" ";
            c++;
        }
        cout<<endl;
    }
}


void p14(int n){
    for(int i=0;i<n;i++){
        char ch='A';
        for(int j=0;j<i;j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
}

void p15(int n){
    for(int i=n;i>=1;i--){
        char ch='A';
        for(int j=0;j<i;j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
}

void p16(int n){
    char ch='A';
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<ch<<" ";
        }
        cout<<endl;
        ch++;
    }
}

void p17(int n){
    for(int i=1;i<=n;i++){
        char ch='A';
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        for(int j=0;j<i;j++){
            cout<<char('A'+j)<<" ";
            ch++;
        }
        for(int j=i-2;j>=0;j--){
            cout<<char('A'+j)<<" ";
            ch--;
        }
        cout<<endl;
    }
}


void p18(int n){
    char ch=char('A'+n-1);
    for(int i=0;i<n;i++){
        char c=ch;
        for(int j=0;j<=i;j++){
            cout<<c<<" ";
            c++;
        }
        ch--;
        cout<<endl;
    }
}

void p19(int n){
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        for(int j=1;j<=2*(n-i);j++){
            cout<<"  ";
        }
        for(int j=i;j>=1;j--){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        for(int j=1;j<=2*(n-i);j++){
            cout<<"  ";
        }
        for(int j=i;j>=1;j--){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void p20(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        for(int j=1;j<=2*(n-i);j++){
            cout<<"  ";
        }
        for(int j=i;j>=1;j--){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=n-1;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        for(int j=1;j<=2*(n-i);j++){
            cout<<"  ";
        }
        for(int j=i;j>=1;j--){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void p21(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if (i==0 || i==n-1 || j==0 || j==n-1){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}

void p22(int n){
    for(int i=0;i<2*n-1;i++){
        for(int j=0;j<2*n-1;j++){
            int top=i;
            int left=j;
            int right=2*(n-1)-j;
            int bottom=2*(n-1)-i;
            cout<<(n-min(min(top,bottom),min(left,right)))<<" ";
        }
        cout<<endl;
    }
}


int main(){
    p22(4);
}