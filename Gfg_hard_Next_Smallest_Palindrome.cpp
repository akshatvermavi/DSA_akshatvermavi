class Solution{
public:
   vector<int> generateNextPalindrome(int num[], int n) {
	    // code here
	   if(n==1){
	        if(num[0]<9){
	            return {num[0]+1};
	        }
	        else{return {1,1};}
	    }
	    vector<int>v(num, num+n), v2(num, num+n);
	    int lst=n-1, fg=0;
	    for(int i=0; i<n/2; i++){
	        if(v[i]>v[lst]){
	            v[lst]=v[i];
	            fg=0;
	        }
	        else if(v[lst]>v[i]){
	            v[lst]=v[i];
	            fg=1;
	        }
	        lst--;
	    }
	    if(fg==0 and v!=v2){return v;}
	    vector<int>ans;
	    string s="";
	    for(int i=0; i<(n+1)/2; i++){s=(char)(num[i]+'0')+s;}
	    s=s+"0";
	    int rem=1, l=0;
	    while(true){
	        int ss=(s[l]-'0')+rem;
	        s[l]=((ss%10)+'0');
	        if(ss>9){rem=1;}
	        else{break;}
	        l++;
	    }
	    if(s.back()=='0'){s.pop_back();}
	    string a1=s;
	    reverse(s.begin(), s.end());
	    if(n%2==1){s.pop_back();}
	    string aa=s+a1;
	    for(auto &b: aa){
	        int nn=b-'0';
	        ans.push_back(nn);
	    }
	    if(ans.size()>n+1){
	        ans.erase(ans.begin()+(ans.size()/2));
	    }
	    return ans;
	}

};
