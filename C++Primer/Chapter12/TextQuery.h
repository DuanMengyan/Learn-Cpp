#pragma once

#ifndef TEXTQUERY_H
#define TEXTQUERY_H

#include "header_include.h"
#include "QueryResult.h"
#include "fun.h"

using namespace std;

class QueryResult;


class TextQuery
{

public:
	using line_no = vector<string>::size_type;

	//���캯��
	TextQuery(ifstream &);
	QueryResult query(const string&) const;
	~TextQuery();
	//��Ա����
	void print();		//��ӡ�ı�����

private:
	shared_ptr<vector<string>> file;		//�����ļ�
	map<string, shared_ptr<set<line_no>>> wm;
};


#endif // !TEXTQUERY_H





