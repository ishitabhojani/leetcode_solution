class Solution {
public:
    int countSeniors(vector<string>& details) {
        //string age = " ";
        int count = 0;
        for(auto x : details){
            string age = x.substr(11,2);
            // age =  x[11];
            // char age2 = x[12];
            int Age = stoi(age);


            if(Age > 60){
                count++;
            }
            cout << Age << endl;
            //cout << age2 << endl;
            //age = " ";
        }
        
        return count;
    }
};