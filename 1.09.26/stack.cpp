// #include <iostream>
// using namespace std;

// int arr[5] = {};
//     int a = 0;
// void push(int val) 
// {
//    if(a < 5)
//    {
//     arr[a] = val;
//     a++;
//    } else {
//     cout << "Memory out of bound" << endl;
//    }

// }

// void pop () 
// {
//     if(a > 0)
//     {
//         a--;
//         cout << "popped element " << arr[a] << endl;
//     }
//     else {
//         cout << "Stack overflow" << endl;
//     }
// }

// void top()
// {
//     cout << " Top element is : " << arr[a - 1] << endl;
// }
// void display() 
// {
//     for(int i = a - 1; i >= 0; i--)
//     {
//         cout << arr[i] << endl;
//     }
// }
// void size() {
//     cout << "size is" << a << endl;
// }

// int main() 
// {
//     push(10);
//     push(20);
//     push(30);
//     for(int i = 0; i < a; i++) {
//     cout <<  "displayed elements" << arr[i] << endl;
//     }

//     pop();
//     cout << "Popped elements" << endl;
//     for(int i = 0; i < a;i++) {
//     cout << arr[i] << endl;
//     }
//     top();
//     display();
//     size();
//     return 0;
// }




// // stack que :



// #include <iostream>
// using namespace std;

// int arr[5] = {};
// int a = 0;

// void push(int val)
// {
//     if(a < 5)
//     {
//         arr[a] = val;
//         a++;
//     }
//     else
//     {
//         cout << "Stack is full" << endl;
//     }
// }

// void largest()
// {
//     if(a > 0)
//     {
//         int max = arr[0];

//         for(int i = 1; i < a; i++)
//         {
//             if(arr[i] > max)
//             {
//                 max = arr[i];
//             }
//         }

//         cout << "Largest element is: " << max << endl;
//     }
//     else
//     {
//         cout << "Stack is empty" << endl;
//     }
// }

// int main()
// {
//     push(11);
//     push(3);
//     push(9);
//     push(1);
//     push(5);

//     largest();

//     return 0;
// }


// stack que : 2 



#include <iostream>
using namespace std;

int arr[5] = {};
int a = 0;

int temp[5] = {};
int b = 0;

void push(int val)
{
    if(a < 5)
    {
        arr[a] = val;
        a++;
    }
}

int pop()
{
    if(a > 0)
    {
        a--;
        return arr[a];
    }
    return -1;
}

void pushTemp(int val)
{
    if(b < 5)
    {
        temp[b] = val;
        b++;
    }
}

int popTemp()
{
    if(b > 0)
    {
        b--;
        return temp[b];
    }
    return -1;
}

int main()
{
    push(2);
    push(3);
    push(4);
    push(3);
    push(1);

    int target = 3;

    while(a > 0)
    {
        int val = pop();

        if(val != target)
        {
            pushTemp(val);
        }
    }

    while(b > 0)
    {
        push(popTemp());
    }

    cout << "Stack after removing target:" << endl;

    for(int i = a - 1; i >= 0; i--)
    {
        cout << arr[i] << endl;
    }

    return 0;
}


//

//1. //

#include <iostream>
using namespace std;

int arr[5] = {};
int a = 0;

void push(int val)
{
    if(a < 5)
    {
        arr[a] = val;
        a++;
    }
}

void targetOccurs(int target)
{
    int count = 0;

    for(int i = 0; i < a; i++)
    {
        if(arr[i] == target)
        {
            count++;
        }
    }

    cout << "Target occurs: " << count << endl;
}

int main()
{
    push(1);
    push(2);
    push(1);
    push(3);
    push(1);

    int target = 1;

    targetOccurs(target);

    return 0;
}
