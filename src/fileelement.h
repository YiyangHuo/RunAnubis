#include <vector>
#include <string>
using namespace std;
class Fileelement {
	public:
		vector<int> gettimespan();
		Fileelement(vector<string>& names, vector<int>& timespan);

		vector<string> getnames();

	private:
		vector<int> _timespan;
		vector<string> _filenames;
		
		//��Ҫ��ʼ������ʱ�䣬��Ӧ��ʱ���µ������ļ������ƣ� 
};
