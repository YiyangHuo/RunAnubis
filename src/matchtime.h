#include <vector>
#include <string>
using namespace std;
class Matches {
	public:
		vector<int> gettimespan();
		Matches(vector<string> names, vector<int> timespan);
		vector<string> getnames();
		bool equals(vector<int> rhs);
		void addname(string name);

	private:
		vector<int> _timespan;
		vector<string> _filenames;
		
		//��Ҫ��ʼ������ʱ�䣬��Ӧ��ʱ���µ������ļ������ƣ� 
};
