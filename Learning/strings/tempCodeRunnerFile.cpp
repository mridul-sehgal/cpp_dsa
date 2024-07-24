 int count[256] = {0};
    transform(s.begin(), s.end(), s.begin(), ::tolower);

    for (int i = 0; i < s.length(); i++)
    {
        count[s.at(i)]++;
    }

    int maxi = 0;
    char chr;
    for (int i = 0; i < s.length(); i++)
    {
        if(maxi<count[s.at(i)])
        {
            maxi=count[s.at(i)];
            chr=s.at(i);
        }
    }

    cout<<chr;