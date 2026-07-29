char* simplifyPath(char* path) {
    char* stack[1500];
    int top =0;
    char* token = strtok(path,"/");
    while(token != NULL){
        if(strcmp(token, ".")==0 ||strcmp(token," ")==0){

        }
        else if(strcmp(token,"..")==0){
            if(top >0) top--;
        }
        else { stack[top++]= token;}
        token = strtok(NULL,"/");
    }
    char* res = (char*)malloc(3001*sizeof(char));
    res[0]='\0';
    if(top ==0){
        strcpy(res,"/");
        return res;
    }
    for(int i=0;i<top;i++){
        strcat(res,"/");
        strcat(res,stack[i]);
    }
    return res;
    
}