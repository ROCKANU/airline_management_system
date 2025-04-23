
	}
};
class filehandlingmodule{
	public:
	string username1,password1;
	bool log_in(string username,string password){
		ifstream fileread;
		fileread.open("login.txt");
		while(fileread>>username1>>password1){