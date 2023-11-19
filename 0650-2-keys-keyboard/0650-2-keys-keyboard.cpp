class Solution {
public:
    void copy(int screen,int &clipboard,int &count){
        clipboard=screen;
        count++;   
    }
    
    void paste(int &screen,int clipboard,int &count){
        screen+=clipboard;
        count++;
        
    }
    int minSteps(int n) {
        int screen=1;
        int clipboard=0;
        int count=0;//number of operation 
        while(screen!=n){
            if(n%screen==0) copy(screen,clipboard,count);  
            paste(screen,clipboard,count);//Always after the copy operation,you will call the paste function
        }
        return count;  
    }
};