#include<iostream>
using namespace std;

class STRING
{
    private:
        char str[100];
    public:
        int get_len(char a[])
        {
            int length = 0;
            for(int i=0; a[i] !='\0'; i++)
                ++length;
            return length;
        }

        void display(char a[])
        {
            int l = get_len(a);
            for(int i=0; i < l; i++)
                cout << a[i];
            cout << endl;
        }

        void store(char a[])
        {
            int l = get_len(a);
            for(int i=0; i < l; i++)
                str[i] = a[i];
        }

        void add(char a[], char b[])
        {
            int l1 = get_len(a);
            int l2 = get_len(b);
            store(a);
            for(int i=0; i<=l2; i++)
                str[l1 + i] = b[i];
            display(str);
        }

        bool equate(char a[], char b[])
        {
            if (get_len(a) != get_len(b))
                return false;
            for(int i = 0; i < get_len(a); i++)
                if (a[i] != b[i])
                    return false;
            return true;
        }

};

int main()
{
    char s1[] = "abcd";
    char s2[] = "efgh";
    STRING str1;
    str1.store(s1);
    str1.display(s1);
    str1.add(s1, s2);
    str1.equate(s1, s2);
    if (str1.equate(s1, s2))
        cout << "Strings are equal.";
    else
        cout << "Strings aren't equal.";
    return 0;
}