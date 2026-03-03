#include "iostream"
#include "map"
#include "string"
#include "sstream"

using namespace std;

int main()
{

    int n, q;
    string currentTagHierarchy = "", attr_name, query;
    map<string, string> DataTags;

    cin>> n >> q;
    cin.ignore();

    for(int i =0; i<n; i++)
    {
        string line, tag, extract;
        getline(cin, line);
        stringstream sso(line);

        while(getline(sso, extract, ' '))
        {
            if(extract[0] == '<')
            {
                if(extract[1] != '/')
                {
                    tag = extract.substr(1);

                    if(tag[tag.length() -1] == '>')
                    {
                        tag.pop_back();
                    }

                    if(currentTagHierarchy.size() > 0)
                    {
                        currentTagHierarchy += "." + tag;
                    }
                    else
                    {
                        currentTagHierarchy = tag;
                    }

                }
                else
                {
                    size_t pos = currentTagHierarchy.find('.' + tag);
                    if(pos != string::npos)
                    {
                       currentTagHierarchy = currentTagHierarchy.substr(0, pos);
                    }
                    else
                    {
                        currentTagHierarchy = "";
                    }    

                }
            }
            else if(extract[0] == '"')
            {
                size_t pos = extract.find_last_of('"');
                string attr_value = extract.substr(1, pos -1);
                DataTags[attr_name] = attr_value;
            }
            else
            {
                if(extract != "=")
                {
                    attr_name = currentTagHierarchy + "~" + extract;
                }
            }
        }
    }

    for(int i = 0; i < q; i++)
    {
        getline(cin, query);
        map<string, string>::iterator itr = DataTags.find(query);
        if(itr != DataTags.end())
        {
            cout<< itr->second << endl;
        }
        else
        {
            cout<< "Not Found!" << endl;
        }

    }

    return 0;
}