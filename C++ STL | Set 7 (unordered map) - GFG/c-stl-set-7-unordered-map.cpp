// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

void add_value(unordered_map<int,int> &m,int x,int y);

int find_value(unordered_map<int,int> &m,int x);

int getSize(unordered_map<int,int> &m);

void removeKey(unordered_map<int,int> &m,int x);

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		unordered_map<int,int> m;
		int q;
		cin>>q;
		while(q--)
		{
			char c;
			cin>>c;
			if(c=='a')
			{
				int x,y;
				cin>>x>>y;
				add_value(m,x,y);
			}
			if(c=='b')
			{
				int y;
				cin>>y;
				cout<<find_value(m,y)<<" ";
			}	
			if(c=='c')
			{
				cout<<getSize(m)<<" ";
			}
			if(c=='d')
			{
				int x;
				cin>>x;
				removeKey(m,x);
			}
			
		
		}
cout<<endl;
	}
	return 0;
}// } Driver Code Ends


/*You are required to complete below methods */

/*Inserts an entry with key x and value y in map */
void add_value(unordered_map<int,int> &m,int x,int y)
{
	//Your code here
	m.insert({x, y});
	m[x]=y;
}

/*Returns the value with key x from the map */
int find_value(unordered_map<int,int> &m,int x)
{
      //Your code hereif()
      if(m.find(x) != m.end()){
          return m[x];
      }
      
      return -1;
}

/*Returns the size of the map */
int getSize(unordered_map<int,int> &m)
{
	//Your code here
	return m.size();
}

/*Removes the entry with key x from the map */
void removeKey(unordered_map<int,int> &mp,int x)
{
	//Your code hereo
	if(mp.find(x) != mp.end()){
	    mp.erase(x);
	}
}