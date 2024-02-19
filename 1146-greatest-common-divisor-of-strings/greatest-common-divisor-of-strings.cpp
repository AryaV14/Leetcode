class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        return (str1 + str2 == str2 + str1)? 
        str1.substr(0, gcd(size(str1),size(str2))): "";
    //     int len2 = str2.length();
    //     int len1 = str1.length();
    //     int strlen =len2, i=0,j=0,k;
    //     string str="";
       
        

    //     while(i<len1 || j<len2)
    //     {
    //         while(len1%strlen!=0 || len2%strlen!=0)
    //         {
    //             strlen= len2-1;
    //         }
    //         for(k=0;k<strlen;k++)
    //         {
    //             str[k]=str1[k];

    //         }

    //         k=0;
    //         while(str1[i]==str[k] && str2[j]==str[k])
    //         {
    //             i++;j++;k++;
    //             if(k==strlen)
    //                 k=0;
    //         }
            
    //     }


           
    // return str;    
        
    }
};