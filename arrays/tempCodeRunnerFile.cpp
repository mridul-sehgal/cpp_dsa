int st = 0;
    int e = s.length() - 1;

    transform(s.begin(), s.end(), s.begin(), ::tolower);
    while (st <= e)
    {
        while (special(s[st]))
        {
            st++;
        }

        while (special(s[e]))
        {
            e--;
        }

        if (s[st] == s[e])
        {
            cout<<endl<<s[st]<<"  "<<s[e];
            st++;
            e--;
        }

        else
        {
            cout<<endl<<endl<<s[st]<<"  "<<s[e];
            cout << "no";
            return 0;
        }
    }

    cout << "yes";
    
    return 0;