#include "readfile.h"

TheFile::TheFile(string& filename)
{
	TiXmlDocument* myDocument = new TiXmlDocument(filename.c_str());
}

vector<Fileelement> TheFile::getInfo()
{
	return _timeinfo;
}
//ʱ����Ϣ��������¼������������ҵ�����ʱ��
