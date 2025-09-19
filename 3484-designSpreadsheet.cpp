class Spreadsheet {
public:
unordered_map<string,int>m;
    Spreadsheet(int rows) {
        
    }
    
    void setCell(string cell, int value) {
        m[cell]=value;
        

        
    }
    
    void resetCell(string cell) {
        m[cell]=0;
        //  or can use m.erase(cell);
    }
    
    int getValue(string formula) {
        string st=formula.substr(1);
        int plus=st.find('+');
        string left=st.substr(0,plus);
        string right=st.substr(plus+1);
        // check ki number toh nhi given 
        int first= m[left],sec=m[right];
        if(isdigit(left[0]))first=stoi(left);
        if(isdigit(right[0]))sec=stoi(right);
         return first+sec;
        
    }
};

/**
 * Your Spreadsheet object will be instantiated and called as such:
 * Spreadsheet* obj = new Spreadsheet(rows);
 * obj->setCell(cell,value);
 * obj->resetCell(cell);
 * int param_3 = obj->getValue(formula);
 */