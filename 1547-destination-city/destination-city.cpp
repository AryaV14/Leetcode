class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_set<string> set;
        for(int i = 0; i < paths.size(); i++){
            set.insert(paths[i][0]);
        }
        for(int i = 0; i < paths.size(); i++){
            if(set.find(paths[i][1]) == set.end()) return paths[i][1];
        }
        return "";
    }
};




// class Solution {
// public:
//     string destCity(vector<vector<string>>& paths) {
//         string x;
//         for(int i=0;i<paths.size();i++)
//         {   
//             int flag=1;
//             x = paths[i][1];
//             for(int j=0;j<paths.size();j++)
//                 if(x==paths[j][0])
//                   {
//                         flag=0;
//                         break;
//                   }

//             if(flag)
//             {
//                 return x; 
//             }      
//         }
//         return "";
//     }
// };