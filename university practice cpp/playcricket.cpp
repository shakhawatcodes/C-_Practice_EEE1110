#include <iostream>
#include <string>
#include <cstdlib> // rand() ফাংশনের জন্য
using namespace std;

// ফাংশনগুলোর ডিক্লেয়ারেশন
void T20();
void innings(int &t1, int &w1, int t2);
void over(int &t1, int &w1, int t2, bool &s);
void result(int t1, int w1, string n1, int t2, int w2, string n2);

// মূল ফাংশন
int main()
{
    T20();
    return 0;
}

// T20 ফাংশন
void T20()
{
    int t1 = 0, w1 = 0, t2 = 0, w2 = 0;
    string n1, n2; 
    
    // টিমগুলোর নাম ইনপুট নেওয়া
    cin >> n1 >> n2;
    
    // দুই টিমের ইনিংস
    innings(t1, w1, t2);
    innings(t2, w2, t1);
    
    // ফলাফল প্রকাশ
    result(t1, w1, n1, t2, w2, n2);
}

// ইনিংস ফাংশন
void innings(int &t1, int &w1, int t2)
{
    bool s = 1;
    for(int i = 1; i <= 20; i++)
    {
        over(t1, w1, t2, s);
        if (s == 0)
        {
            break;
        }
    }
}

// ওভার ফাংশন
void over(int &t1, int &w1, int t2, bool &s)
{
    // খাতায় এখানে int লেখা ছিল, তবে এটি for লুপ হবে
    for(int i = 1; i <= 6; i++) 
    {
        int rw = rand() % 100;
        if (rw < 8)
        {
            w1++;
            if (w1 == 10)
            {
                s = 0; 
                return;
            }
            continue;
        }
        
        t1 = t1 + rand() % 7;
        
        if (t1 > t2)
        {
            s = 0; 
            return;
        }
    }
}

// রেজাল্ট ফাংশন
void result(int t1, int w1, string n1, int t2, int w2, string n2)
{
    cout << n1 << ": " << t1 << "/" << w1 << endl;
    cout << n2 << ": " << t2 << "/" << w2 << endl;
    cout << (t1 > t2 ? n1 : n2);
    cout << " is the winner!" << endl;
}