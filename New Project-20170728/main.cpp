#include <iostream>
#include <cstdlib>

using namespace std;
int i = -1;
void push();
void pop();
int decision();
int arr[10];
void display();

int main() {
    int m;
    m = decision();
    while(m > 0) {
        switch(m) {
            case 1: push();
                    break;
            case 2: pop();
                    break;
            case 3: exit(0);
            default:cout<<"Range is 1 to 3\n"<<endl;
        }
        m = decision();
    }
    return 0;
}

void push() {
    int p;
    cout<<"Enter the element to be pushed: ";
    cin>>p;
    if(i >= 9) {
        cout<<"Stack Overflow\n";
    } else {
            i = i + 1;
            arr[i] = p;
            cout<<"The element is successfully pushed\n";
            display();
        }
}

void pop() {
    int k;
    int j = i-1;
    if(j < -1) {
        cout<<"Stack Underflow\n";
    } else {
    for (k = j; k >= 0; k--) {
        cout<<"|"<<arr[k]<<"|"<<endl;
    }
    cout<<"Successfully poped\n";
        i = i - 1;
}
}

int decision() {
    int n;
    cout<<"\nEnter your choice\n1.push\n2.pop\n3.exit\n";
    cin>>n;
    return n;
}

void display() {
    int j;
    for (j = i; j >= 0; j--) {
        cout<<"|"<<arr[j]<<"|"<<endl;
    }
}




    



