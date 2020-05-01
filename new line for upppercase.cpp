#include <bits/stdc++.h> 
using namespace std; 

string StringToUpper(string strToConvert)
{
    std::transform(strToConvert.begin(), strToConvert.end(), strToConvert.begin(), ::tolower);

    return strToConvert;
}

int main() 
{ 
		string s;
		cin>>s;
		int n=s.length();
		string s1=StringToUpper(s);
		for(int i=0;i<s.length();i++)
		{
			if(s[i]!=s1[i] && i!=0)
			{
				cout<<endl;
				cout<<s[i];
				
			}
			else
			{
				cout<<s[i];
			}
			
		}
} 



