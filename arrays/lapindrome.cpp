#include <iostream>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {

        string s;
        cin >> s;
        int start = 0;
        int end = s.size();

        int m = start + (end - start) / 2;
        int checkleft[26] = {0};
        int checkright[26] = {0};

        if (s.size() % 2 == 0)
        {
            for (int i = start; i < m; i++)
            {
                int b = s[i];
                cout << b << endl;
                int num = b - 97;
                cout << num << endl;
                checkleft[num]++;
            }

            for (int i = m; i < end; i++)
            {
                int b = s[i];
                cout << b << endl;
                int num = b - 97;
                cout << num << endl;
                checkright[num]++;
            }

            for (int i = 0; i < 25; i++)
            {
                cout << checkleft[i] << " ";
            }

            cout << endl;

            for (int i = 0; i < 25; i++)
            {
                cout << checkright[i] << " ";
            }
            int i;
            for (i = 0; i < 25; i++)
            {
                if (checkleft[i] != checkright[i])
                {
                    cout << "NO";
                    break;
                }
            }

            if (i == 25)
            {
                cout << "YES";
            }
        }

        else
        {
            for (int i = start; i < m; i++)
            {
                int b = s[i];
                cout << b << endl;
                int num = b - 97;
                cout << num << endl;
                checkleft[num]++;
            }

            for (int i = m + 1; i < end; i++)
            {
                int b = s[i];
                cout << b << endl;
                int num = b - 97;
                cout << num << endl;
                checkright[num]++;
            }

            for (int i = 0; i < 25; i++)
            {
                cout << checkleft[i] << " ";
            }

            cout << endl;

            for (int i = 0; i < 25; i++)
            {
                cout << checkright[i] << " ";
            }

            int i;
            for (i = 0; i < 25; i++)
            {
                if (checkleft[i] != checkright[i])
                {
                    cout << "NO";
                    break;
                }
            }

            if (i == 25)
            {
                cout << "YES";
            }
        }
    }

    return 0;
}