#include <iostream>
#include <vector>
#include <deque>
#include <cmath>
#include <algorithm>
#include <set>
#include <iomanip>
#include<numeric>
#include <math.h>
using namespace std;
// 3 to decimal
class Convert_To_D {
    string num;
    int base;
    string Result;
public:
    void Convert_B_ToAll()
    {
        for (int i = 0; i < num.length(); i++)
        {
            if (num[i] == 0 || num[i] == 1)
            {
                num[i] -= '0';
                num[i] *= base;
                Result += num[i];
                base *= 2;
            }
        }
    }
    string get_Result_D()
    {
        return Result;
    }
    void set_num_base(string num, int bb)
    {
        this->num = num;
        base = bb;
    }
};


class Convert_D {
    int decimal, base;
    string Result; 
public:
    void Convert_D_ToAll() 
    {
        while (decimal >= 1)
        {
            int mod = decimal % base;
            if (mod >= 10)
                Result.push_back(char(mod + 55)); 
            else
                Result.push_back(mod + '0');
            decimal /= base;
        }
        reverse(Result.begin(), Result.end()); 
    }
    string get_Result()
    {
        return Result;
    }
    void set_num_base(int num, int b)
    {
        decimal = num;
        base = b;
    }
};

int main()
{
    Convert_To_D c;
    c.set_num_base("10111", 2);
    cout << c.get_Result_D();
    cerr << endl;
    /*c.set_num_base("701", 8);
    cout << c.get_Result_D();*/
    return 0;
}
