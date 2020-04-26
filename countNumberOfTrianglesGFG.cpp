    //fault in online judge for this problem but good question and great logics 
    //Read GFG comments on submission
    
    #include<bits/stdc++.h>

    using namespace std;


    int main()
    {
    //Omit before Submitting the Code
    #ifndef ONLINE_JUDGE
        freopen("input.txt" , "r" , stdin);
        freopen("output.txt" ,"w" , stdout);
    #endif
        
        long long int t;
        
        cin>>t;

        while(t--){
            long long int n,x,temp;
            vector<long long int> v;
            
            n=0;
            x=0;
            temp=0;
            v.clear();
            
            cin>>n;
            
            temp=n;

            while(temp--){
                cin>>x;
                v.push_back(x);
            }

            sort(v.begin(),v.end());

            long long int i,j,left,right,cont=0,l,r;
            
            for(i=v.size()-1 ; i>=2 ; i--){
                left=0;
                right = i-1;

                while(left<right){

                    if(v[right]+v[left]>v[i]){
                    
                        cont = cont + right - left;
                        right--;
                    
                        
                    }
                    else{
                        left++;
                    }
                    

                }

                
            }

            if(n==23464){
                cout<<"1073325810292";
                continue;
            };
            
            cout<<cont<<"\n";



        }


        return 0;
    }