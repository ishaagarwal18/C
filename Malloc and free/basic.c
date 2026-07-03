// malloc(40);

// . malloc() doesn't know how you are going to use this memory 
// . for example if we ask for 40 bytes then you may store
//         1. 40 characters
//         2. 10 integers
//         3. 5 integers 20 characters
//         4. 5 doubles 
// . return type of malloc is void 