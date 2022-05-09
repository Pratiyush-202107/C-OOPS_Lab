#include<iostream>
using namespace std;

class STRING
{
    private:
        char str[100]; //Data member to store strings
    public:
        //Member function to get length
        int get_len(char a[])
        {
            int length = 0;
            for(int i=0; a[i] !='\0'; i++)
                ++length;
            return length;
        }

        //Member function to display strings
        void display(char a[])
        {
            int l = get_len(a);
            for(int i=0; i < l; i++)
                cout << a[i];
            cout << endl;
        }

        //Member function to store strings
        void store(char a[])
        {
            int l = get_len(a);
            for(int i=0; i < l; i++)
                str[i] = a[i];
        }

        //Member function to add two strings
        void add(char a[], char b[])
        {
            int l1 = get_len(a);
            int l2 = get_len(b);
            store(a);
            for(int i=0; i<=l2; i++)
                str[l1 + i] = b[i];
            display(str);
        }

        //Member function to equate two strings
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

//Main function
int main()
{
    //Declaring and initializing strings for storing and equating.
    char s1[] = "abcd";
    char s2[] = "efgh";
    //Creating an object to perform operations.
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