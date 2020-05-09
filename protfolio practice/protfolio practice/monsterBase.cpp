#include "stdafx.h"
#include "monsterBase.h"


monsterBase::monsterBase()
{
}


monsterBase::~monsterBase()
{
}


string monsterBase::GetMonsterName()
{
	return _monsterName;
}
int monsterBase::GetMonsterMaxHp()
{
	return _monsterMaxHp;
}
int monsterBase::GetMonsterHp()
{
	return _monsterHp;
}
int monsterBase::GetMonsterAtk()
{
	return _monsterAtk;
}
int monsterBase::GetMonsterExp()
{
	return _monsterExp;
}
int monsterBase::GetMonsterMoney()
{
	return _monsterMoney;
}
int monsterBase::GetMonsterSeed()
{
	return _monsterSeed;
}
void monsterBase::SetMonsterName(string name)
{
	_monsterName = name;
}
void monsterBase::SetMonsterMaxHp(int maxhp)
{
	_monsterMaxHp = maxhp;
}
void monsterBase::SetMonsterHp(int hp)
{
	_monsterHp = hp;
}
void monsterBase::SetMonsterAtk(int atk)
{
	_monsterAtk = atk;
}
void monsterBase::SetMonsterExp(int exp)
{
	_monsterExp = exp;
}
void monsterBase::SetMonsterMoney(int money)
{
	_monsterMoney = money;
}
void monsterBase::SetMonsterSeed(int seed)
{
	_monsterSeed = seed;
}


void monsterBase::MonsterSkill()
{
	if (_monsterName == "据周戚")
	{
		cout << "＝＝÷÷÷＝＝＝÷÷÷＝＝＝÷÷÷＝＝＝÷÷÷＝＝＝÷÷÷＝＝＝÷÷÷＝＝" << endl;	// 1
		cout << "＝　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　＝" << endl;	// 2
		cout << "÷"; SetColor(0, 15); cout << "　　　　　　　　　　　　　　　　　　　　　　　　　　　＝＝＝＝＝＝＝　"; SetColor(9, 15); cout << "÷" << endl;	// 3
		cout << "÷"; SetColor(0, 15); cout << "　　　　　　　　　　　　　　　　　　　　　　　　　　　＝　　　　　＝　"; SetColor(9, 15); cout << "÷" << endl;	// 4
		cout << "÷"; SetColor(0, 15); cout << "　　　　　　　　　　　　　　　　　　　　　　　　　　　＝　拝訂奄　＝　"; SetColor(9, 15); cout << "÷" << endl;	// 5
		cout << "＝"; SetColor(0, 15); cout << "　　　　　　　　　　　　　　　　　　　　　　　　　　　＝　　　　　＝　"; SetColor(9, 15); cout << "＝" << endl;	// 6
		cout << "＝"; SetColor(0, 15); cout << "　　　　　　　　　　　　　　　　　　　　　　　　　　　＝＝＝＝＝＝＝　"; SetColor(9, 15); cout << "＝" << endl;	// 7
		cout << "＝　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　＝" << endl;	// 8//奄綬
	}
	else if (_monsterName == "酵　巣")
	{
		cout << "＝＝÷÷÷＝＝＝÷÷÷＝＝＝÷÷÷＝＝＝÷÷÷＝＝＝÷÷÷＝＝＝÷÷÷＝＝" << endl;	// 1
		cout << "＝　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　＝" << endl;	// 2
		cout << "÷"; SetColor(0, 15); cout << "　　　　　　　　　　　　　　　　　　　　　　　　　　　＝＝＝＝＝＝＝　"; SetColor(9, 15); cout << "÷" << endl;	// 3
		cout << "÷"; SetColor(0, 15); cout << "　　　　　　　　　　　　　　　　　　　　　　　　　　　＝　　　　　＝　"; SetColor(9, 15); cout << "÷" << endl;	// 4
		cout << "÷"; SetColor(0, 15); cout << "　　　　　　　　　　　　　　　　　　　　　　　　　　　＝　罷　迫　＝　"; SetColor(9, 15); cout << "÷" << endl;	// 5
		cout << "＝"; SetColor(0, 15); cout << "　　　　　　　　　　　　　　　　　　　　　　　　　　　＝　　　　　＝　"; SetColor(9, 15); cout << "＝" << endl;	// 6
		cout << "＝"; SetColor(0, 15); cout << "　　　　　　　　　　　　　　　　　　　　　　　　　　　＝＝＝＝＝＝＝　"; SetColor(9, 15); cout << "＝" << endl;	// 7
		cout << "＝　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　＝" << endl;	// 8//奄綬
	}
	else if (_monsterName == "偽　紫")
	{
		cout << "＝＝÷÷÷＝＝＝÷÷÷＝＝＝÷÷÷＝＝＝÷÷÷＝＝＝÷÷÷＝＝＝÷÷÷＝＝" << endl;	// 1
		cout << "＝　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　＝" << endl;	// 2
		cout << "÷"; SetColor(0, 15); cout << "　　　　　　　　　　　　　　　　　　　　　　　　　　　＝＝＝＝＝＝＝　"; SetColor(9, 15); cout << "÷" << endl;	// 3
		cout << "÷"; SetColor(0, 15); cout << "　　　　　　　　　　　　　　　　　　　　　　　　　　　＝　　　　　＝　"; SetColor(9, 15); cout << "÷" << endl;	// 4
		cout << "÷"; SetColor(0, 15); cout << "　　　　　　　　　　　　　　　　　　　　　　　　　　　＝　弘　奄　＝　"; SetColor(9, 15); cout << "÷" << endl;	// 5
		cout << "＝"; SetColor(0, 15); cout << "　　　　　　　　　　　　　　　　　　　　　　　　　　　＝　　　　　＝　"; SetColor(9, 15); cout << "＝" << endl;	// 6
		cout << "＝"; SetColor(0, 15); cout << "　　　　　　　　　　　　　　　　　　　　　　　　　　　＝＝＝＝＝＝＝　"; SetColor(9, 15); cout << "＝" << endl;	// 7
		cout << "＝　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　＝" << endl;	// 8//奄綬
	}
	else if (_monsterName == "娯掬走")
	{
		cout << "＝＝÷÷÷＝＝＝÷÷÷＝＝＝÷÷÷＝＝＝÷÷÷＝＝＝÷÷÷＝＝＝÷÷÷＝＝" << endl;	// 1
		cout << "＝　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　＝" << endl;	// 2
		cout << "÷"; SetColor(0, 15); cout << "　　　　　　　　　　　　　　　　　　　　　　　　　　　＝＝＝＝＝＝＝　"; SetColor(9, 15); cout << "÷" << endl;	// 3
		cout << "÷"; SetColor(0, 15); cout << "　　　　　　　　　　　　　　　　　　　　　　　　　　　＝　　　　　＝　"; SetColor(9, 15); cout << "÷" << endl;	// 4
		cout << "÷"; SetColor(0, 15); cout << "　　　　　　　　　　　　　　　　　　　　　　　　　　　＝　宜　遭　＝　"; SetColor(9, 15); cout << "÷" << endl;	// 5
		cout << "＝"; SetColor(0, 15); cout << "　　　　　　　　　　　　　　　　　　　　　　　　　　　＝　　　　　＝　"; SetColor(9, 15); cout << "＝" << endl;	// 6
		cout << "＝"; SetColor(0, 15); cout << "　　　　　　　　　　　　　　　　　　　　　　　　　　　＝＝＝＝＝＝＝　"; SetColor(9, 15); cout << "＝" << endl;	// 7
		cout << "＝　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　＝" << endl;	// 8//奄綬
	}
	else if (_monsterName == "姶唇切")
	{
		cout << "＝＝÷÷÷＝＝＝÷÷÷＝＝＝÷÷÷＝＝＝÷÷÷＝＝＝÷÷÷＝＝＝÷÷÷＝＝" << endl;	// 1
		cout << "＝　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　＝" << endl;	// 2
		cout << "÷"; SetColor(0, 15); cout << "　　　　　　　　　　　　　　　　　　　　　　　　　　　＝＝＝＝＝＝＝　"; SetColor(9, 15); cout << "÷" << endl;	// 3
		cout << "÷"; SetColor(0, 15); cout << "　　　　　　　　　　　　　　　　　　　　　　　　　　　＝　　　　　＝　"; SetColor(9, 15); cout << "÷" << endl;	// 4
		cout << "÷"; SetColor(0, 15); cout << "　　　　　　　　　　　　　　　　　　　　　　　　　　　＝　奄　因　＝　"; SetColor(9, 15); cout << "÷" << endl;	// 5
		cout << "＝"; SetColor(0, 15); cout << "　　　　　　　　　　　　　　　　　　　　　　　　　　　＝　　　　　＝　"; SetColor(9, 15); cout << "＝" << endl;	// 6
		cout << "＝"; SetColor(0, 15); cout << "　　　　　　　　　　　　　　　　　　　　　　　　　　　＝＝＝＝＝＝＝　"; SetColor(9, 15); cout << "＝" << endl;	// 7
		cout << "＝　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　＝" << endl;	// 8//奄綬
	}
	else if (_monsterName == "発　切")
	{
		cout << "＝＝÷÷÷＝＝＝÷÷÷＝＝＝÷÷÷＝＝＝÷÷÷＝＝＝÷÷÷＝＝＝÷÷÷＝＝" << endl;	// 1
		cout << "＝　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　＝" << endl;	// 2
		cout << "÷"; SetColor(0, 15); cout << "　　　　　　　　　　　　　　　　　　　　　　　　　　　＝＝＝＝＝＝＝　"; SetColor(9, 15); cout << "÷" << endl;	// 3
		cout << "÷"; SetColor(0, 15); cout << "　　　　　　　　　　　　　　　　　　　　　　　　　　　＝　　　　　＝　"; SetColor(9, 15); cout << "÷" << endl;	// 4
		cout << "÷"; SetColor(0, 15); cout << "　　　　　　　　　　　　　　　　　　　　　　　　　　　＝　督　因　＝　"; SetColor(9, 15); cout << "÷" << endl;	// 5
		cout << "＝"; SetColor(0, 15); cout << "　　　　　　　　　　　　　　　　　　　　　　　　　　　＝　　　　　＝　"; SetColor(9, 15); cout << "＝" << endl;	// 6
		cout << "＝"; SetColor(0, 15); cout << "　　　　　　　　　　　　　　　　　　　　　　　　　　　＝＝＝＝＝＝＝　"; SetColor(9, 15); cout << "＝" << endl;	// 7
		cout << "＝　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　＝" << endl;	// 8//奄綬
	}
}

void monsterBase::MonsterNormal()
{
	if (_monsterName == "据周戚")
	{
		SetColor(9, 15);

		cout << "÷"; SetColor(0, 15); cout << "　　　　　　　　　　　　　　　　　　　　　　　　　　　　＝＝　　　　　"; SetColor(9, 15); cout << "÷" << endl;	// 9
		cout << "÷"; SetColor(0, 15); cout << "　　　　　　　　　　　　　　　　　　　　　　　　　　　　＝＝　　　　　"; SetColor(9, 15); cout << "÷" << endl;	// 10
		cout << "÷"; SetColor(0, 15); cout << "　　　　　　　　　　　　　　　　　　　　　　　　　　　　　＝　　＝　　"; SetColor(9, 15); cout << "÷" << endl;	// 11
		cout << "＝"; SetColor(0, 15); cout << "　　　　　　　　　　　　　　　　　　　　　　　　　　　　＝　＝＝　　　"; SetColor(9, 15); cout << "＝" << endl;	// 12
		cout << "＝"; SetColor(0, 15); cout << "　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　＝　　　　"; SetColor(9, 15); cout << "＝" << endl;	// 13
		cout << "＝"; SetColor(0, 15); cout << "　　　　　　　　　　　　　　　　　　　　　　　　　　　　　＝　＝　　　"; SetColor(9, 15); cout << "＝" << endl;	// 14
	}
	else if (_monsterName == "酵　巣")
	{
		SetColor(9, 15);

		cout << "÷"; SetColor(0, 15); cout << "　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　"; SetColor(9, 15); cout << "÷" << endl;	// 9
		cout << "÷"; SetColor(0, 15); cout << "　　　　　　　　　　　　　　　　　　　　　　　　　　　＝　　　＝　　　"; SetColor(9, 15); cout << "÷" << endl;	// 10
		cout << "÷"; SetColor(0, 15); cout << "　　　　　　　　　　　　　　　　　　　　　　　　　　＝＝＝＝＝＝＝　　"; SetColor(9, 15); cout << "÷" << endl;	// 11
		cout << "＝"; SetColor(0, 15); cout << "　　　　　　　　　　　　　　　　　　　　　　　　　　＝　＝＝＝　＝　　"; SetColor(9, 15); cout << "＝" << endl;	// 12
		cout << "＝"; SetColor(0, 15); cout << "　　　　　　　　　　　　　　　　　　　　　　　　　　　　＝＝＝　　　　"; SetColor(9, 15); cout << "＝" << endl;	// 13
		cout << "＝"; SetColor(0, 15); cout << "　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　"; SetColor(9, 15); cout << "＝" << endl;	// 14
	}
	else if (_monsterName == "偽　紫")
	{
		SetColor(9, 15);

		cout << "÷　　　　　　　　　　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "＝＝＝　　　　　　"; SetColor(9, 15); cout << "÷" << endl;	// 9
		cout << "÷　　　　　　　　　　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "＝＝＝　　　　　　"; SetColor(9, 15); cout << "÷" << endl;	// 10
		cout << "÷　　　　　　　　　　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　　＝　　　　　　"; SetColor(9, 15); cout << "÷" << endl;	// 11
		cout << "＝　　　　　　　　　　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　　＝　　＝　　　"; SetColor(9, 15); cout << "＝" << endl;	// 12
		cout << "＝　　　　　　　　　　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　　＝　　　＝　　"; SetColor(9, 15); cout << "＝" << endl;	// 13
		cout << "＝　　　　　　　　　　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　　　＝＝＝　　　"; SetColor(9, 15); cout << "＝" << endl;	// 14
	}
	else if (_monsterName == "娯掬走")
	{
		SetColor(9, 15);

		cout << "÷　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　"; SetColor(9, 15); cout << "÷" << endl;	// 9
		cout << "÷　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　"; SetColor(9, 15); cout << "÷" << endl;	// 10
		cout << "÷　　　　　　　　　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　　＝＝＝＝＝　　　"; SetColor(9, 15); cout << "÷" << endl;	// 11
		cout << "＝　　　　　　　　　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　＝＝＝＝＝＝　　　"; SetColor(9, 15); cout << "＝" << endl;	// 12
		cout << "＝　　　　　　　　　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "＝＝＝＝＝＝＝　　　"; SetColor(9, 15); cout << "＝" << endl;	// 13
		cout << "＝　　　　　　　　　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　　＝　　＝　　　　"; SetColor(9, 15); cout << "＝" << endl;	// 14
	}
	else if (_monsterName == "姶唇切")
	{
		SetColor(9, 15);


		cout << "÷　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　"; SetColor(9, 15); cout << "÷" << endl;	// 9
		cout << "÷　　　　　　　　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　　　　＝＝　　　　　"; SetColor(9, 15); cout << "÷" << endl;	// 10
		cout << "÷　　　　　　　　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　　　　＝＝　　　　　"; SetColor(9, 15); cout << "÷" << endl;	// 11
		cout << "＝　　　　　　　　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　　　＝＝＝＝　　　　"; SetColor(9, 15); cout << "＝" << endl;	// 12
		cout << "＝　　　　　　　　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　　＝　＝＝　＝　　　"; SetColor(9, 15); cout << "＝" << endl;	// 13
		cout << "＝　　　　　　　　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　　　＝　　＝　　　　"; SetColor(9, 15); cout << "＝" << endl;	// 14
	}
	else if (_monsterName == "発　切")
	{
		SetColor(9, 15);

		cout << "÷　　　　　　　　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　　　　　＝　　　　　"; SetColor(9, 15); cout << "÷" << endl;	// 9
		cout << "÷　　　　　　　　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　　　　＝＝＝　　　　"; SetColor(9, 15); cout << "÷" << endl;	// 10
		cout << "÷　　　　　　　　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　　　　＝＝　　　　　"; SetColor(9, 15); cout << "÷" << endl;	// 11
		cout << "＝　　　　　　　　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　　　＝＝＝＝　　　　"; SetColor(9, 15); cout << "＝" << endl;	// 12
		cout << "＝　　　　　　　　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　　＝　＝＝　＝　　　"; SetColor(9, 15); cout << "＝" << endl;	// 13
		cout << "＝　　　　　　　　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　　　＝　　＝　　　　"; SetColor(9, 15); cout << "＝" << endl;	// 14
	}

}

void monsterBase::MonsterAtk()
{
	if (_monsterName == "据周戚")
	{
		SetColor(9, 15);

		cout << "÷"; SetColor(0, 15); cout << "　　　　　　　　　　　　　　　　　　　　　　　　　＝＝　　　　　　　　"; SetColor(9, 15); cout << "÷" << endl;	// 9
		cout << "÷"; SetColor(0, 15); cout << "　　　　　　　　　　　　　　　　　　　　　　　　　＝＝　　　　　　　　"; SetColor(9, 15); cout << "÷" << endl;	// 10
		cout << "÷"; SetColor(0, 15); cout << "　　　　　　　　　　　　　　　　　　　　　　　　　　＝　　＝　　　　　"; SetColor(9, 15); cout << "÷" << endl;	// 11
		cout << "＝"; SetColor(0, 15); cout << "　　　　　　　　　　　　　　　　　　　　　　　　＝＝　＝＝　　　　　　"; SetColor(9, 15); cout << "＝" << endl;	// 12
		cout << "＝"; SetColor(0, 15); cout << "　　　　　　　　　　　　　　　　　　　　　　　　　　　＝　　　　　　　"; SetColor(9, 15); cout << "＝" << endl;	// 13
		cout << "＝"; SetColor(0, 15); cout << "　　　　　　　　　　　　　　　　　　　　　　　　　　＝　＝　　　　　　"; SetColor(9, 15); cout << "＝" << endl;	// 14
	}
	else if (_monsterName == "酵　巣")
	{
		SetColor(9, 15);

		cout << "÷"; SetColor(0, 15); cout << "　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　"; SetColor(9, 15); cout << "÷" << endl;	// 9
		cout << "÷"; SetColor(0, 15); cout << "　　　　　　　　　　　　　　　　　　＝　＝　　　＝　＝　　　　　　　　"; SetColor(9, 15); cout << "÷" << endl;	// 10
		cout << "÷"; SetColor(0, 15); cout << "　　　　　　　　　　　　　　　　　　　＝＝＝＝＝＝＝　　　　　　　　　"; SetColor(9, 15); cout << "÷" << endl;	// 11
		cout << "＝"; SetColor(0, 15); cout << "　　　　　　　　　　　　　　　　　　　　　＝＝＝　　　　　　　　　　　"; SetColor(9, 15); cout << "＝" << endl;	// 12
		cout << "＝"; SetColor(0, 15); cout << "　　　　　　　　　　　　　　　　　　　　＝　＝　　　　　　　　　　　　"; SetColor(9, 15); cout << "＝" << endl;	// 13
		cout << "＝"; SetColor(0, 15); cout << "　　　　　　　　　　　　　　　　　　　　　＝　　　　　　　　　　　　　"; SetColor(9, 15); cout << "＝" << endl;	// 14
	}
	else if (_monsterName == "偽　紫")
	{
		SetColor(9, 15);

		cout << "÷　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　"; SetColor(9, 15); cout << "÷" << endl;	// 9
		cout << "÷　　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　＝＝＝　　　　　　　　　　　　　"; SetColor(9, 15); cout << "÷" << endl;	// 10
		cout << "÷　　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "＝＝＝＝＝　　　＝　　　　　　　　"; SetColor(9, 15); cout << "÷" << endl;	// 11
		cout << "＝　　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　　＝＝＝　　＝　＝　＝　　　　　"; SetColor(9, 15); cout << "＝" << endl;	// 12
		cout << "＝　　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　＝　　＝＝＝　　　＝　　　　　　"; SetColor(9, 15); cout << "＝" << endl;	// 13
		cout << "＝　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　"; SetColor(9, 15); cout << "＝" << endl;	// 14
	}
	else if (_monsterName == "娯掬走")
	{
		SetColor(9, 15);

		cout << "÷　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　"; SetColor(9, 15); cout << "÷" << endl;	// 9
		cout << "÷　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　"; SetColor(9, 15); cout << "÷" << endl;	// 10
		cout << "÷　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　　＝＝＝＝＝　＝　＝　＝　＝　　　　"; SetColor(9, 15); cout << "÷" << endl;	// 11
		cout << "＝　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　＝＝＝＝＝＝　　　　　　　　　　　　"; SetColor(9, 15); cout << "＝" << endl;	// 12
		cout << "＝　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "＝＝＝＝＝＝＝　＝　＝　＝　＝　　　　"; SetColor(9, 15); cout << "＝" << endl;	// 13
		cout << "＝　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　　＝　　＝　　　　　　　　　　　　　"; SetColor(9, 15); cout << "＝" << endl;	// 14
	}
	else if (_monsterName == "姶唇切")
	{
		SetColor(9, 15);

		cout << "÷　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　　　　　　　　　　　　　　　　　　　　　　"; SetColor(9, 15); cout << "÷" << endl;	// 9
		cout << "÷　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　　　＝　＝　　＝＝　　　　　　　　　　　　"; SetColor(9, 15); cout << "÷" << endl;	// 10
		cout << "÷　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　　　　　＝＝　＝＝　　　　　　　　　　　　"; SetColor(9, 15); cout << "÷" << endl;	// 11
		cout << "＝　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　＝　＝　　　＝＝＝　　　　　　　　　　　　"; SetColor(9, 15); cout << "＝" << endl;	// 12
		cout << "＝　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　　　　　＝＝　＝＝　　　　　　　　　　　　"; SetColor(9, 15); cout << "＝" << endl;	// 13
		cout << "＝　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　　　＝　＝　＝　　＝　　　　　　　　　　　"; SetColor(9, 15); cout << "＝" << endl;	// 14
	}
	else if (_monsterName == "発　切")
	{
		SetColor(9, 15);

		cout << "÷　　　　　　　　　　　　"; SetColor(0, 15); cout << "　　　　　　　　　　＝　　　　　　　　　　　　"; SetColor(9, 15); cout << "÷" << endl;	// 9
		cout << "÷　　　　　　　　　　　　"; SetColor(0, 15); cout << "　　　＝　　＝　　＝＝＝　　　　　　　　　　　"; SetColor(9, 15); cout << "÷" << endl;	// 10
		cout << "÷　　　　　　　　　　　　"; SetColor(0, 15); cout << "　＝　　　　　＝　＝＝　　　　　　　　　　　　"; SetColor(9, 15); cout << "÷" << endl;	// 11
		cout << "＝　　　　　　　　　　　　"; SetColor(0, 15); cout << "　　　　＝＝＝＝＝＝＝　　　　　　　　　　　　"; SetColor(9, 15); cout << "＝" << endl;	// 12
		cout << "＝　　　　　　　　　　　　"; SetColor(0, 15); cout << "　＝　　　　　＝　＝＝　　　　　　　　　　　　"; SetColor(9, 15); cout << "＝" << endl;	// 13
		cout << "＝　　　　　　　　　　　　"; SetColor(0, 15); cout << "　　　＝　　＝　＝　　＝　　　　　　　　　　　"; SetColor(9, 15); cout << "＝" << endl;	// 14
	}
}

void monsterBase::MonsterGetDmg1()
{
	if (_monsterName == "据周戚")
	{
		SetColor(9, 15);

		cout << "÷　　　　　　　　　　　　　　　　　　　　　"; SetColor(14, 15); cout << "　＝　　　　　"; SetColor(0, 15); cout << "　＝＝　　　　"; SetColor(9, 15); cout << "÷" << endl;	// 9
		cout << "÷　　　　　　　　　　　　　　　　　　　　　"; SetColor(14, 15); cout << "　＝　　　　　"; SetColor(0, 15); cout << "　＝＝　　　　"; SetColor(9, 15); cout << "÷" << endl;	// 10
		cout << "÷　　　　　　　　　　　　　　　　　　　　　"; SetColor(14, 15); cout << "＝＝＝＝＝＝　"; SetColor(0, 15); cout << "＝＝　　＝　　"; SetColor(9, 15); cout << "÷" << endl;	// 11
		cout << "＝　　　　　　　　　　　　　　　　　　　　　"; SetColor(14, 15); cout << "　＝　＝　　　"; SetColor(0, 15); cout << "　　＝＝　　　"; SetColor(9, 15); cout << "＝" << endl;	// 12
		cout << "＝　　　　　　　　　　　　　　　　　　　　　"; SetColor(14, 15); cout << "　＝　　　　　"; SetColor(0, 15); cout << "　　＝　　　　"; SetColor(9, 15); cout << "＝" << endl;	// 13
		cout << "＝　　　　　　　　　　　　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　＝　＝　　　"; SetColor(9, 15); cout << "＝" << endl;	// 14
	}
	else if (_monsterName == "酵　巣")
	{
		SetColor(9, 15);

		cout << "÷　　　　　　　　　　　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　＝＝　　　　　"; SetColor(9, 15); cout << "÷" << endl;	// 9
		cout << "÷　　　　　　　　　　　　　　　　　　　"; SetColor(14, 15); cout << "　＝　　　　　　"; SetColor(0, 15); cout << "＝＝　　　　　　"; SetColor(9, 15); cout << "÷" << endl;	// 10
		cout << "÷　　　　　　　　　　　　　　　　　　　"; SetColor(14, 15); cout << "　＝　　　　　　"; SetColor(0, 15); cout << "＝＝＝＝　　　　"; SetColor(9, 15); cout << "÷" << endl;	// 11
		cout << "＝　　　　　　　　　　　　　　　　　　　"; SetColor(14, 15); cout << "＝＝＝＝＝＝　　"; SetColor(0, 15); cout << "　＝＝＝　＝　　"; SetColor(9, 15); cout << "＝" << endl;	// 12
		cout << "＝　　　　　　　　　　　　　　　　　　　"; SetColor(14, 15); cout << "　＝　＝　　　　"; SetColor(0, 15); cout << "　　＝＝＝＝　　"; SetColor(9, 15); cout << "＝" << endl;	// 13
		cout << "＝　　　　　　　　　　　　　　　　　　　"; SetColor(14, 15); cout << "　＝　　　　　　"; SetColor(0, 15); cout << "　　　＝＝　　　"; SetColor(9, 15); cout << "＝" << endl;	// 14
	}
	else if (_monsterName == "偽　紫")
	{
		SetColor(9, 15);

		cout << "÷　　　　　　　　　　　　　　　　　　　"; SetColor(14, 15); cout << "　＝　　　　　"; SetColor(0, 15); cout << "　＝＝　　　　　　"; SetColor(9, 15); cout << "÷" << endl;	// 9
		cout << "÷　　　　　　　　　　　　　　　　　　　"; SetColor(14, 15); cout << "　＝　　　　　"; SetColor(0, 15); cout << "＝＝＝　　　　　　"; SetColor(9, 15); cout << "÷" << endl;	// 10
		cout << "÷　　　　　　　　　　　　　　　　　　　"; SetColor(14, 15); cout << "＝＝＝＝＝＝　"; SetColor(0, 15); cout << "＝＝　　　　　　　"; SetColor(9, 15); cout << "÷" << endl;	// 11
		cout << "＝　　　　　　　　　　　　　　　　　　　"; SetColor(14, 15); cout << "　＝　＝　　　"; SetColor(0, 15); cout << "　＝　　　　　　　"; SetColor(9, 15); cout << "＝" << endl;	// 12
		cout << "＝　　　　　　　　　　　　　　　　　　　"; SetColor(14, 15); cout << "　＝　　　　　"; SetColor(0, 15); cout << "　　＝＝＝　　＝　"; SetColor(9, 15); cout << "＝" << endl;	// 13
		cout << "＝　　　　　　　　　　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　　　　　＝＝　　"; SetColor(9, 15); cout << "＝" << endl;	// 14
	}
	else if (_monsterName == "娯掬走")
	{
		SetColor(9, 15);

		cout << "÷　　　　　　　　　　　　　　　　　　　　"; SetColor(14, 15); cout << "　＝　　　　　"; SetColor(0, 15); cout << "＝＝＝＝＝　　　"; SetColor(9, 15); cout << "÷" << endl;	// 9
		cout << "÷　　　　　　　　　　　　　　　　　　　　"; SetColor(14, 15); cout << "　＝　　　　　"; SetColor(0, 15); cout << "＝＝＝＝＝＝　　"; SetColor(9, 15); cout << "÷" << endl;	// 10
		cout << "÷　　　　　　　　　　　　　　　　　　　　"; SetColor(14, 15); cout << "＝＝＝＝＝＝　"; SetColor(0, 15); cout << "　＝＝＝＝＝　　"; SetColor(9, 15); cout << "÷" << endl;	// 11
		cout << "＝　　　　　　　　　　　　　　　　　　　　"; SetColor(14, 15); cout << "　＝　＝　　　"; SetColor(0, 15); cout << "＝　＝＝＝＝　　"; SetColor(9, 15); cout << "＝" << endl;	// 12
		cout << "＝　　　　　　　　　　　　　　　　　　　　"; SetColor(14, 15); cout << "　＝　　　　　"; SetColor(0, 15); cout << "　　　＝＝　　　"; SetColor(9, 15); cout << "＝" << endl;	// 13
		cout << "＝　　　　　　　　　　　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　　＝　　　　　"; SetColor(9, 15); cout << "＝" << endl;	// 14
	}
	else if (_monsterName == "姶唇切")
	{
		SetColor(9, 15);

		cout << "÷　　　　　　　　　　　　　　　　　　　"; SetColor(14, 15); cout << "　＝　　　　　"; SetColor(0, 15); cout << "　　　　　　　　　"; SetColor(9, 15); cout << "÷" << endl;	// 9
		cout << "÷　　　　　　　　　　　　　　　　　　　"; SetColor(14, 15); cout << "　＝　　　　　"; SetColor(0, 15); cout << "　　　＝＝　　　　"; SetColor(9, 15); cout << "÷" << endl;	// 10
		cout << "÷　　　　　　　　　　　　　　　　　　　"; SetColor(14, 15); cout << "＝＝＝＝＝＝　"; SetColor(0, 15); cout << "　　　＝＝　　　　"; SetColor(9, 15); cout << "÷" << endl;	// 11
		cout << "＝　　　　　　　　　　　　　　　　　　　"; SetColor(14, 15); cout << "　＝　＝　　　"; SetColor(0, 15); cout << "　＝＝＝＝＝　　　"; SetColor(9, 15); cout << "＝" << endl;	// 12
		cout << "＝　　　　　　　　　　　　　　　　　　　"; SetColor(14, 15); cout << "　＝　　　　　"; SetColor(0, 15); cout << "＝　＝＝　＝　　　"; SetColor(9, 15); cout << "＝" << endl;	// 13
		cout << "＝　　　　　　　　　　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　＝　　＝　　　　"; SetColor(9, 15); cout << "＝" << endl;	// 14
	}
	else if (_monsterName == "発　切")
	{
		SetColor(9, 15);

		cout << "÷　　　　　　　　　　　　　　　　　　"; SetColor(14, 15); cout << "　　＝　　　　　"; SetColor(0, 15); cout << "　　　　＝　　　　"; SetColor(9, 15); cout << "÷" << endl;	// 9
		cout << "÷　　　　　　　　　　　　　　　　　　"; SetColor(14, 15); cout << "　　＝　　　　　"; SetColor(0, 15); cout << "　　　＝＝＝　　　"; SetColor(9, 15); cout << "÷" << endl;	// 10
		cout << "÷　　　　　　　　　　　　　　　　　　"; SetColor(14, 15); cout << "　＝＝＝＝＝＝　"; SetColor(0, 15); cout << "　　　＝＝　　　　"; SetColor(9, 15); cout << "÷" << endl;	// 11
		cout << "＝　　　　　　　　　　　　　　　　　　"; SetColor(14, 15); cout << "　　＝　＝　　　"; SetColor(0, 15); cout << "＝＝＝＝＝＝＝　　"; SetColor(9, 15); cout << "＝" << endl;	// 12
		cout << "＝　　　　　　　　　　　　　　　　　　"; SetColor(14, 15); cout << "　　＝　　　　　"; SetColor(0, 15); cout << "　　＝＝　　　　　"; SetColor(9, 15); cout << "＝" << endl;	// 13
		cout << "＝　　　　　　　　　　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　＝　＝　　　　　"; SetColor(9, 15); cout << "＝" << endl;	// 14
	}

}

void monsterBase::MonsterGetDmg2()
{
	if (_monsterName == "据周戚")
	{
		SetColor(9, 15);

		cout << "÷　　　　　　　　　　　　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　＝＝　　　　"; SetColor(9, 15); cout << "÷" << endl;	// 9
		cout << "÷　　　　　　　　　　　　　　　　　　　　　　　　"; SetColor(12, 15); cout << "＝＝＝　"; SetColor(0, 15); cout << "　＝＝　　　　"; SetColor(9, 15); cout << "÷" << endl;	// 10
		cout << "÷　　　　　　　　　　　　　　　　　　　　　　　　"; SetColor(12, 15); cout << "＝＝＝　"; SetColor(0, 15); cout << "＝＝　　＝　　"; SetColor(9, 15); cout << "÷" << endl;	// 11
		cout << "＝　　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　　　＝　　"; SetColor(12, 15); cout << "＝＝＝　"; SetColor(0, 15); cout << "　　＝＝　　　"; SetColor(9, 15); cout << "＝" << endl;	// 12
		cout << "＝　　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "＝　　　＝　　　　　"; SetColor(0, 15); cout << "　　＝　　　　"; SetColor(9, 15); cout << "＝" << endl;	// 13
		cout << "＝　　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　＝　　　　　　　　"; SetColor(0, 15); cout << "　＝　＝　　　"; SetColor(9, 15); cout << "＝" << endl;	// 14

	}
	else if (_monsterName == "酵　巣")
	{
		SetColor(9, 15);

		cout << "÷　　　　　　　　　　　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　＝＝　　　　　"; SetColor(9, 15); cout << "÷" << endl;	// 9
		cout << "÷　　　　　　　　　　　　　　　　　　　　　　"; SetColor(12, 15); cout << "＝＝＝　　"; SetColor(0, 15); cout << "＝＝　　　　　　"; SetColor(9, 15); cout << "÷" << endl;	// 10
		cout << "÷　　　　　　　　　　　　　　　　　　　　　　"; SetColor(12, 15); cout << "＝＝＝　　"; SetColor(0, 15); cout << "＝＝＝＝　　　　"; SetColor(9, 15); cout << "÷" << endl;	// 11
		cout << "＝　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　　＝　　"; SetColor(12, 15); cout << "＝＝＝　　"; SetColor(0, 15); cout << "　＝＝＝　＝　　"; SetColor(9, 15); cout << "＝" << endl;	// 12
		cout << "＝　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "＝　　＝　　　　　　"; SetColor(0, 15); cout << "　　＝＝＝＝　　"; SetColor(9, 15); cout << "＝" << endl;	// 13
		cout << "＝　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　＝　　　　　　　　"; SetColor(0, 15); cout << "　　　＝＝　　　"; SetColor(9, 15); cout << "＝" << endl;	// 14
	}
	else if (_monsterName == "偽　紫")
	{
		SetColor(9, 15);

		cout << "÷　　　　　　　　　　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　＝＝　　　　　　"; SetColor(9, 15); cout << "÷" << endl;	// 9
		cout << "÷　　　　　　　　　　　　　　　　　　　　　　"; SetColor(12, 15); cout << "＝＝＝　"; SetColor(0, 15); cout << "＝＝＝　　　　　　"; SetColor(9, 15); cout << "÷" << endl;	// 10
		cout << "÷　　　　　　　　　　　　　　　　　　　　　　"; SetColor(12, 15); cout << "＝＝＝　"; SetColor(0, 15); cout << "＝＝　　　　　　　"; SetColor(9, 15); cout << "÷" << endl;	// 11
		cout << "＝　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　　＝　　"; SetColor(12, 15); cout << "＝＝＝　"; SetColor(0, 15); cout << "　＝　　　　　　　"; SetColor(9, 15); cout << "＝" << endl;	// 12
		cout << "＝　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "＝　　＝　　　　　"; SetColor(0, 15); cout << "　　＝＝＝　　＝　"; SetColor(9, 15); cout << "＝" << endl;	// 13
		cout << "＝　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　＝　　　　　　　"; SetColor(0, 15); cout << "　　　　　＝＝　　"; SetColor(9, 15); cout << "＝" << endl;	// 14
	}
	else if (_monsterName == "娯掬走")
	{
		SetColor(9, 15);

		cout << "÷　　　　　　　　　　　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "＝＝＝＝＝　　　"; SetColor(9, 15); cout << "÷" << endl;	// 9
		cout << "÷　　　　　　　　　　　　　　　　　　　　　　"; SetColor(12, 15); cout << "＝＝＝　　"; SetColor(0, 15); cout << "＝＝＝＝＝＝　　"; SetColor(9, 15); cout << "÷" << endl;	// 10
		cout << "÷　　　　　　　　　　　　　　　　　　　　　　"; SetColor(12, 15); cout << "＝＝＝　　"; SetColor(0, 15); cout << "　＝＝＝＝＝　　"; SetColor(9, 15); cout << "÷" << endl;	// 11
		cout << "＝　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　　＝　　"; SetColor(12, 15); cout << "＝＝＝　　"; SetColor(0, 15); cout << "＝　＝＝＝＝　　"; SetColor(9, 15); cout << "＝" << endl;	// 12
		cout << "＝　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "＝　　＝　　　　　　"; SetColor(0, 15); cout << "　　　＝＝　　　"; SetColor(9, 15); cout << "＝" << endl;	// 13
		cout << "＝　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　＝　　　　　　　　"; SetColor(0, 15); cout << "　　＝　　　　　"; SetColor(9, 15); cout << "＝" << endl;	// 14
	}
	else if (_monsterName == "姶唇切")
	{
		SetColor(9, 15);

		cout << "÷　　　　　　　　　　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　　　　　　　　　"; SetColor(9, 15); cout << "÷" << endl;	// 9
		cout << "÷　　　　　　　　　　　　　　　　　　　　　　"; SetColor(12, 15); cout << "＝＝＝　"; SetColor(0, 15); cout << "　　　＝＝　　　　"; SetColor(9, 15); cout << "÷" << endl;	// 10
		cout << "÷　　　　　　　　　　　　　　　　　　　　　　"; SetColor(12, 15); cout << "＝＝＝　"; SetColor(0, 15); cout << "　　　＝＝　　　　"; SetColor(9, 15); cout << "÷" << endl;	// 11
		cout << "＝　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　　　＝　　"; SetColor(12, 15); cout << "＝＝＝　"; SetColor(0, 15); cout << "　＝＝＝＝＝　　　"; SetColor(9, 15); cout << "＝" << endl;	// 12
		cout << "＝　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "＝　　　＝　　　　　"; SetColor(0, 15); cout << "＝　＝＝　＝　　　"; SetColor(9, 15); cout << "＝" << endl;	// 13
		cout << "＝　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　＝　　　　　　　　"; SetColor(0, 15); cout << "　＝　　＝　　　　"; SetColor(9, 15); cout << "＝" << endl;	// 14
	}
	else if (_monsterName == "発　切")
	{
		SetColor(9, 15);

		cout << "　　　　　　　　　　　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　　　　＝　　　　"; SetColor(9, 15); cout << "÷" << endl;	// 9
		cout << "　　　　　　　　　　　　　　　　　　　　　　　"; SetColor(12, 15); cout << "＝＝＝　"; SetColor(0, 15); cout << "　　　＝＝＝　　　"; SetColor(9, 15); cout << "÷" << endl;	// 10
		cout << "　　　　　　　　　　　　　　　　　　　　　　　"; SetColor(12, 15); cout << "＝＝＝　"; SetColor(0, 15); cout << "　　　＝＝　　　　"; SetColor(9, 15); cout << "÷" << endl;	// 11
		cout << "＝　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　　　＝　　"; SetColor(12, 15); cout << "＝＝＝　"; SetColor(0, 15); cout << "＝＝＝＝＝＝＝　　"; SetColor(9, 15); cout << "＝" << endl;	// 12
		cout << "＝　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "＝　　　＝　　　　　"; SetColor(0, 15); cout << "　　＝＝　　　　　"; SetColor(9, 15); cout << "＝" << endl;	// 13
		cout << "＝　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　＝　　　　　　　　"; SetColor(0, 15); cout << "　＝　＝　　　　　"; SetColor(9, 15); cout << "＝" << endl;	// 14
	}

}

void monsterBase::MonsterGetDmg3()
{
	if (_monsterName == "据周戚")
	{
		SetColor(9, 15);

		cout << "÷　　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　＝　　　　　　　　"; SetColor(0, 15); cout << "　＝＝　　　　"; SetColor(9, 15); cout << "÷" << endl;	// 9
		cout << "÷　　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "＝　　　＝　　　　　"; SetColor(0, 15); cout << "　＝＝　　　　"; SetColor(9, 15); cout << "÷" << endl;	// 10
		cout << "÷　　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　　　＝　　"; SetColor(12, 15); cout << "＝＝＝　"; SetColor(0, 15); cout << "＝＝　　＝　　"; SetColor(9, 15); cout << "÷" << endl;	// 11
		cout << "＝　　　　　　　　　　　　　　　　　　　　　　　　"; SetColor(12, 15); cout << "＝＝＝　"; SetColor(0, 15); cout << "　　＝＝　　　"; SetColor(9, 15); cout << "＝" << endl;	// 12
		cout << "＝　　　　　　　　　　　　　　　　　　　　　　　　"; SetColor(12, 15); cout << "＝＝＝　"; SetColor(0, 15); cout << "　　＝　　　　"; SetColor(9, 15); cout << "＝" << endl;	// 13
		cout << "＝　　　　　　　　　　　　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　＝　＝　　　"; SetColor(9, 15); cout << "＝" << endl;	// 14
	}
	else if (_monsterName == "酵　巣")
	{
		SetColor(9, 15);

		cout << "÷　　　　　　　　　　　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　＝＝　　　　　"; SetColor(9, 15); cout << "÷" << endl;	// 9
		cout << "÷　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　＝　　　　　　　　"; SetColor(0, 15); cout << "＝＝　　　　　　"; SetColor(9, 15); cout << "÷" << endl;	// 10
		cout << "÷　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "＝　　＝　　　　　　"; SetColor(0, 15); cout << "＝＝＝＝　　　　"; SetColor(9, 15); cout << "÷" << endl;	// 11
		cout << "＝　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　　＝　　"; SetColor(12, 15); cout << "＝＝＝　　"; SetColor(0, 15); cout << "　＝＝＝　＝　　"; SetColor(9, 15); cout << "＝" << endl;	// 12
		cout << "＝　　　　　　　　　　　　　　　　　　　　　　"; SetColor(12, 15); cout << "＝＝＝　　"; SetColor(0, 15); cout << "　　＝＝＝＝　　"; SetColor(9, 15); cout << "＝" << endl;	// 13
		cout << "＝　　　　　　　　　　　　　　　　　　　　　　"; SetColor(12, 15); cout << "＝＝＝　　"; SetColor(0, 15); cout << "　　　＝＝　　　"; SetColor(9, 15); cout << "＝" << endl;	// 14
	}
	else if (_monsterName == "偽　紫")
	{
		SetColor(9, 15);

		cout << "÷　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　＝　　　　　　　"; SetColor(0, 15); cout << "　＝＝　　　　　　"; SetColor(9, 15); cout << "÷" << endl;	// 9
		cout << "÷　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "＝　　＝　　　　　"; SetColor(0, 15); cout << "＝＝＝　　　　　　"; SetColor(9, 15); cout << "÷" << endl;	// 10
		cout << "÷　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　　＝　　"; SetColor(12, 15); cout << "＝＝＝　"; SetColor(0, 15); cout << "＝＝　　　　　　　"; SetColor(9, 15); cout << "÷" << endl;	// 11
		cout << "＝　　　　　　　　　　　　　　　　　　　　　　"; SetColor(12, 15); cout << "＝＝＝　"; SetColor(0, 15); cout << "　＝　　　　　　　"; SetColor(9, 15); cout << "＝" << endl;	// 12
		cout << "＝　　　　　　　　　　　　　　　　　　　　　　"; SetColor(12, 15); cout << "＝＝＝　"; SetColor(0, 15); cout << "　　＝＝＝　　＝　"; SetColor(9, 15); cout << "＝" << endl;	// 13
		cout << "＝　　　　　　　　　　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　　　　　＝＝　　"; SetColor(9, 15); cout << "＝" << endl;	// 14
	}
	else if (_monsterName == "娯掬走")
	{
		SetColor(9, 15);

		cout << "÷　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　＝　　　　　　　　"; SetColor(0, 15); cout << "＝＝＝＝＝　　　"; SetColor(9, 15); cout << "÷" << endl;	// 9
		cout << "÷　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "＝　　＝　　　　　　"; SetColor(0, 15); cout << "＝＝＝＝＝＝　　"; SetColor(9, 15); cout << "÷" << endl;	// 10
		cout << "÷　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　　＝　　"; SetColor(12, 15); cout << "＝＝＝　　"; SetColor(0, 15); cout << "　＝＝＝＝＝　　"; SetColor(9, 15); cout << "÷" << endl;	// 11
		cout << "＝　　　　　　　　　　　　　　　　　　　　　　"; SetColor(12, 15); cout << "＝＝＝　　"; SetColor(0, 15); cout << "＝　＝＝＝＝　　"; SetColor(9, 15); cout << "＝" << endl;	// 12
		cout << "＝　　　　　　　　　　　　　　　　　　　　　　"; SetColor(12, 15); cout << "＝＝＝　　"; SetColor(0, 15); cout << "　　　＝＝　　　"; SetColor(9, 15); cout << "＝" << endl;	// 13
		cout << "＝　　　　　　　　　　　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　　＝　　　　　"; SetColor(9, 15); cout << "＝" << endl;	// 14
	}
	else if (_monsterName == "姶唇切")
	{
		SetColor(9, 15);

		cout << "÷　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　＝　　　　　　　　"; SetColor(0, 15); cout << "　　　　　　　　　"; SetColor(9, 15); cout << "÷" << endl;	// 9
		cout << "÷　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "＝　　　＝　　　　　"; SetColor(0, 15); cout << "　　　＝＝　　　　"; SetColor(9, 15); cout << "÷" << endl;	// 10
		cout << "÷　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　　　＝　　"; SetColor(12, 15); cout << "＝＝＝　"; SetColor(0, 15); cout << "　　　＝＝　　　　"; SetColor(9, 15); cout << "÷" << endl;	// 11
		cout << "＝　　　　　　　　　　　　　　　　　　　　　　"; SetColor(12, 15); cout << "＝＝＝　"; SetColor(0, 15); cout << "　＝＝＝＝＝　　　"; SetColor(9, 15); cout << "＝" << endl;	// 12
		cout << "＝　　　　　　　　　　　　　　　　　　　　　　"; SetColor(12, 15); cout << "＝＝＝　"; SetColor(0, 15); cout << "＝　＝＝　＝　　　"; SetColor(9, 15); cout << "＝" << endl;	// 13
		cout << "＝　　　　　　　　　　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　＝　　＝　　　　"; SetColor(9, 15); cout << "＝" << endl;	// 14
	}
	else if (_monsterName == "発　切")
	{
		SetColor(9, 15);

		cout << "÷　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　＝　　　　　　　　"; SetColor(0, 15); cout << "　　　　＝　　　　"; SetColor(9, 15); cout << "÷" << endl;	// 9
		cout << "÷　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "＝　　　＝　　　　　"; SetColor(0, 15); cout << "　　　＝＝＝　　　"; SetColor(9, 15); cout << "÷" << endl;	// 10
		cout << "÷　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　　　＝　　"; SetColor(12, 15); cout << "＝＝＝　"; SetColor(0, 15); cout << "　　　＝＝　　　　"; SetColor(9, 15); cout << "÷" << endl;	// 11
		cout << "＝　　　　　　　　　　　　　　　　　　　　　　"; SetColor(12, 15); cout << "＝＝＝　"; SetColor(0, 15); cout << "＝＝＝＝＝＝＝　　"; SetColor(9, 15); cout << "＝" << endl;	// 12
		cout << "＝　　　　　　　　　　　　　　　　　　　　　　"; SetColor(12, 15); cout << "＝＝＝　"; SetColor(0, 15); cout << "　　＝＝　　　　　"; SetColor(9, 15); cout << "＝" << endl;	// 13
		cout << "＝　　　　　　　　　　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　＝　＝　　　　　"; SetColor(9, 15); cout << "＝" << endl;	// 14
	}
}

void monsterBase::MonsterGetDmg4()
{
	if (_monsterName == "据周戚")
	{
		SetColor(9, 15);

		cout << "÷　　　　　　　　　　　　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　＝＝　　　　"; SetColor(9, 15); cout << "÷" << endl;	// 9
		cout << "÷　　　　　　　　　　　　　　　　　　　　　"; SetColor(14, 15); cout << "　　＝　　　　"; SetColor(0, 15); cout << "　＝＝　　　　"; SetColor(9, 15); cout << "÷" << endl;	// 10
		cout << "÷　　　　　　　　　　　　　　　　　　　　　"; SetColor(14, 15); cout << "　　＝＝＝　　"; SetColor(0, 15); cout << "＝＝　　＝　　"; SetColor(9, 15); cout << "÷" << endl;	// 11
		cout << "＝　　　　　　　　　　　　　　　　　　　　　"; SetColor(14, 15); cout << "　　＝　　　　"; SetColor(0, 15); cout << "　　＝＝　　　"; SetColor(9, 15); cout << "＝" << endl;	// 12
		cout << "＝　　　　　　　　　　　　　　　　　　　　　"; SetColor(14, 15); cout << "　＝　＝　　　"; SetColor(0, 15); cout << "　　＝　　　　"; SetColor(9, 15); cout << "＝" << endl;	// 13
		cout << "＝　　　　　　　　　　　　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　＝　＝　　　"; SetColor(9, 15); cout << "＝" << endl;	// 14
	}
	else if (_monsterName == "酵　巣")
	{
		SetColor(9, 15);

		cout << "÷　　　　　　　　　　　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　＝＝　　　　　"; SetColor(9, 15); cout << "÷" << endl;	// 9
		cout << "÷　　　　　　　　　　　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "＝＝　　　　　　"; SetColor(9, 15); cout << "÷" << endl;	// 10
		cout << "÷　　　　　　　　　　　　　　　　　　　　　　"; SetColor(14, 15); cout << "　＝　　　"; SetColor(0, 15); cout << "＝＝＝＝　　　　"; SetColor(9, 15); cout << "÷" << endl;	// 11
		cout << "＝　　　　　　　　　　　　　　　　　　　　　　"; SetColor(14, 15); cout << "　＝＝＝　"; SetColor(0, 15); cout << "　＝＝＝　＝　　"; SetColor(9, 15); cout << "＝" << endl;	// 12
		cout << "＝　　　　　　　　　　　　　　　　　　　　　　"; SetColor(14, 15); cout << "　＝　　　"; SetColor(0, 15); cout << "　　＝＝＝＝　　"; SetColor(9, 15); cout << "＝" << endl;	// 13
		cout << "＝　　　　　　　　　　　　　　　　　　　　　　"; SetColor(14, 15); cout << "＝　＝　　"; SetColor(0, 15); cout << "　　　＝＝　　　"; SetColor(9, 15); cout << "＝" << endl;	// 14
	}
	else if (_monsterName == "偽　紫")
	{
		SetColor(9, 15);


		cout << "÷　　　　　　　　　　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　＝＝　　　　　　"; SetColor(9, 15); cout << "÷" << endl;	// 9
		cout << "÷　　　　　　　　　　　　　　　　　　　　　"; SetColor(14, 15); cout << "　＝　　　"; SetColor(0, 15); cout << "＝＝＝　　　　　　"; SetColor(9, 15); cout << "÷" << endl;	// 10
		cout << "÷　　　　　　　　　　　　　　　　　　　　　"; SetColor(14, 15); cout << "　＝＝＝　"; SetColor(0, 15); cout << "＝＝　　　　　　　"; SetColor(9, 15); cout << "÷" << endl;	// 11
		cout << "＝　　　　　　　　　　　　　　　　　　　　　"; SetColor(14, 15); cout << "　＝　　　"; SetColor(0, 15); cout << "　＝　　　　　　　"; SetColor(9, 15); cout << "＝" << endl;	// 12
		cout << "＝　　　　　　　　　　　　　　　　　　　　　"; SetColor(14, 15); cout << "＝　＝　　"; SetColor(0, 15); cout << "　　＝＝＝　　＝　"; SetColor(9, 15); cout << "＝" << endl;	// 13
		cout << "＝　　　　　　　　　　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　　　　　＝＝　　"; SetColor(9, 15); cout << "＝" << endl;	// 14
	}
	else if (_monsterName == "娯掬走")
	{
		SetColor(9, 15);

		cout << "÷　　　　　　　　　　　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "＝＝＝＝＝　　　"; SetColor(9, 15); cout << "÷" << endl;	// 9
		cout << "÷　　　　　　　　　　　　　　　　　　　　　　"; SetColor(14, 15); cout << "　＝　　　"; SetColor(0, 15); cout << "＝＝＝＝＝＝　　"; SetColor(9, 15); cout << "÷" << endl;	// 10
		cout << "÷　　　　　　　　　　　　　　　　　　　　　　"; SetColor(14, 15); cout << "　＝＝＝　"; SetColor(0, 15); cout << "　＝＝＝＝＝　　"; SetColor(9, 15); cout << "÷" << endl;	// 11
		cout << "＝　　　　　　　　　　　　　　　　　　　　　　"; SetColor(14, 15); cout << "　＝　　　"; SetColor(0, 15); cout << "＝　＝＝＝＝　　"; SetColor(9, 15); cout << "＝" << endl;	// 12
		cout << "＝　　　　　　　　　　　　　　　　　　　　　　"; SetColor(14, 15); cout << "＝　＝　　"; SetColor(0, 15); cout << "　　　＝＝　　　"; SetColor(9, 15); cout << "＝" << endl;	// 13
		cout << "＝　　　　　　　　　　　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　　＝　　　　　"; SetColor(9, 15); cout << "＝" << endl;	// 14
	}
	else if (_monsterName == "姶唇切")
	{
		SetColor(9, 15);

		cout << "÷　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　"; SetColor(9, 15); cout << "÷" << endl;	// 9
		cout << "÷　　　　　　　　　　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　　　＝＝　　　　"; SetColor(9, 15); cout << "÷" << endl;	// 10
		cout << "÷　　　　　　　　　　　　　　　　　　　"; SetColor(14, 15); cout << "　　＝　　　　"; SetColor(0, 15); cout << "　　　＝＝　　　　"; SetColor(9, 15); cout << "÷" << endl;	// 11
		cout << "＝　　　　　　　　　　　　　　　　　　　"; SetColor(14, 15); cout << "　　＝＝＝　　"; SetColor(0, 15); cout << "　＝＝＝＝＝　　　"; SetColor(9, 15); cout << "＝" << endl;	// 12
		cout << "＝　　　　　　　　　　　　　　　　　　　"; SetColor(14, 15); cout << "　　＝　　　　"; SetColor(0, 15); cout << "＝　＝＝　＝　　　"; SetColor(9, 15); cout << "＝" << endl;	// 13
		cout << "＝　　　　　　　　　　　　　　　　　　　"; SetColor(14, 15); cout << "　＝　＝　　　"; SetColor(0, 15); cout << "　＝　　＝　　　　"; SetColor(9, 15); cout << "＝" << endl;	// 14
	}
	else if (_monsterName == "発　切")
	{
		SetColor(9, 15);

		cout << "÷　　　　　　　　　　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　　　　＝　　　　"; SetColor(9, 15); cout << "÷" << endl;	// 9
		cout << "÷　　　　　　　　　　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　　　＝＝＝　　　"; SetColor(9, 15); cout << "÷" << endl;	// 10
		cout << "÷　　　　　　　　　　　　　　　　　　　"; SetColor(14, 15); cout << "　　＝　　　　"; SetColor(0, 15); cout << "　　　＝＝　　　　"; SetColor(9, 15); cout << "÷" << endl;	// 11
		cout << "＝　　　　　　　　　　　　　　　　　　　"; SetColor(14, 15); cout << "　　＝＝＝　　"; SetColor(0, 15); cout << "＝＝＝＝＝＝＝　　"; SetColor(9, 15); cout << "＝" << endl;	// 12
		cout << "＝　　　　　　　　　　　　　　　　　　　"; SetColor(14, 15); cout << "　　＝　　　　"; SetColor(0, 15); cout << "　　＝＝　　　　　"; SetColor(9, 15); cout << "＝" << endl;	// 13
		cout << "＝　　　　　　　　　　　　　　　　　　　"; SetColor(14, 15); cout << "　＝　＝　　　"; SetColor(0, 15); cout << "　＝　＝　　　　　"; SetColor(9, 15); cout << "＝" << endl;	// 14
	}

}

void monsterBase::MonsterGetDmg5()
{
	if (_monsterName == "据周戚")
	{
		SetColor(9, 15);

		cout << "÷　　　　　　　　　"; SetColor(11, 15); cout << "＝　　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　＝＝　　　　"; SetColor(9, 15); cout << "÷" << endl;	// 9
		cout << "÷　　　　　　　　　　　　"; SetColor(11, 15); cout << "＝　　＝　　＝　　"; SetColor(14, 15); cout << "＝　＝　　　　"; SetColor(0, 15); cout << "　＝＝　　　　"; SetColor(9, 15); cout << "÷" << endl;	// 10
		cout << "÷　　　　　　　　　　　　　　　　　　　　　"; SetColor(14, 15); cout << "　＝＝＝＝　　"; SetColor(0, 15); cout << "＝＝　　＝　　"; SetColor(9, 15); cout << "÷" << endl;	// 11
		cout << "＝　　　　　　　　　　　　"; SetColor(11, 15); cout << "＝　　＝　　＝　　"; SetColor(14, 15); cout << "＝　　　　　　"; SetColor(0, 15); cout << "　　＝＝　　　"; SetColor(9, 15); cout << "＝" << endl;	// 12
		cout << "＝　　　　　　　　　"; SetColor(11, 15); cout << "＝　　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　　＝　　　　"; SetColor(9, 15); cout << "＝" << endl;	// 13
		cout << "＝　　　　　　　　　　　　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　＝　＝　　　"; SetColor(9, 15); cout << "＝" << endl;	// 14
	}
	else if (_monsterName == "酵　巣")
	{
		SetColor(9, 15);

		cout << "÷　　　　　　　　　　　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　＝＝　　　　　"; SetColor(9, 15); cout << "÷" << endl;	// 9
		cout << "÷　　　　　　　　　"; SetColor(11, 15); cout << "＝　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "＝＝　　　　　　"; SetColor(9, 15); cout << "÷" << endl;	// 10
		cout << "÷　　　　　　　　　　　　"; SetColor(11, 15); cout << "＝　　＝　　＝　　"; SetColor(14, 15); cout << "＝　＝　　　"; SetColor(0, 15); cout << "＝＝＝＝　　　　"; SetColor(9, 15); cout << "÷" << endl;	// 11
		cout << "＝　　　　　　　　　　　　　　　　　　　　　"; SetColor(14, 15); cout << "　＝＝＝＝　"; SetColor(0, 15); cout << "　＝＝＝　＝　　"; SetColor(9, 15); cout << "＝" << endl;	// 12
		cout << "＝　　　　　　　　　　　　"; SetColor(11, 15); cout << "＝　　＝　　＝　　"; SetColor(14, 15); cout << "＝　　　　　"; SetColor(0, 15); cout << "　　＝＝＝＝　　"; SetColor(9, 15); cout << "＝" << endl;	// 13
		cout << "＝　　　　　　　　　"; SetColor(11, 15); cout << "＝　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　　　＝＝　　　"; SetColor(9, 15); cout << "＝" << endl;	// 14
	}
	else if (_monsterName == "偽　紫")
	{
		SetColor(9, 15);

		cout << "÷　　　　　　　　　　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　＝＝　　　　　　"; SetColor(9, 15); cout << "÷" << endl;	// 9
		cout << "÷　　　　　　　　"; SetColor(11, 15); cout << "＝　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "＝＝＝　　　　　　"; SetColor(9, 15); cout << "÷" << endl;	// 10
		cout << "÷　　　　　　　　　　　"; SetColor(11, 15); cout << "＝　　＝　　＝　　"; SetColor(14, 15); cout << "＝　＝　　　"; SetColor(0, 15); cout << "＝＝　　　　　　　"; SetColor(9, 15); cout << "÷" << endl;	// 11
		cout << "＝　　　　　　　　　　　　　　　　　　　　"; SetColor(14, 15); cout << "　＝＝＝＝　"; SetColor(0, 15); cout << "　＝　　　　　　　"; SetColor(9, 15); cout << "＝" << endl;	// 12
		cout << "＝　　　　　　　　　　　"; SetColor(11, 15); cout << "＝　　＝　　＝　　"; SetColor(14, 15); cout << "＝　　　　　"; SetColor(0, 15); cout << "　　＝＝＝　　＝　"; SetColor(9, 15); cout << "＝" << endl;	// 13
		cout << "＝　　　　　　　　"; SetColor(11, 15); cout << "＝　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　　　　　＝＝　　"; SetColor(9, 15); cout << "＝" << endl;	// 14
	}
	else if (_monsterName == "娯掬走")
	{
		SetColor(9, 15);

		cout << "÷　　　　　　　　　"; SetColor(11, 15); cout << "＝　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "＝＝＝＝＝　　　"; SetColor(9, 15); cout << "÷" << endl;	// 9
		cout << "÷　　　　　　　　　　　　"; SetColor(11, 15); cout << "＝　　＝　　＝　　"; SetColor(14, 15); cout << "＝　＝　　　"; SetColor(0, 15); cout << "＝＝＝＝＝＝　　"; SetColor(9, 15); cout << "÷" << endl;	// 10
		cout << "÷　　　　　　　　　　　　　　　　　　　　　"; SetColor(14, 15); cout << "　＝＝＝＝　"; SetColor(0, 15); cout << "　＝＝＝＝＝　　"; SetColor(9, 15); cout << "÷" << endl;	// 11
		cout << "＝　　　　　　　　　　　　"; SetColor(11, 15); cout << "＝　　＝　　＝　　"; SetColor(14, 15); cout << "＝　　　　　"; SetColor(0, 15); cout << "＝　＝＝＝＝　　"; SetColor(9, 15); cout << "＝" << endl;	// 12
		cout << "＝　　　　　　　　　"; SetColor(11, 15); cout << "＝　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　　　＝＝　　　"; SetColor(9, 15); cout << "＝" << endl;	// 13
		cout << "＝　　　　　　　　　　　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　　＝　　　　　"; SetColor(9, 15); cout << "＝" << endl;	// 14
	}
	else if (_monsterName == "姶唇切")
	{
		SetColor(9, 15);

		cout << "÷　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　"; SetColor(9, 15); cout << "÷" << endl;	// 9
		cout << "÷　　　　　　"; SetColor(11, 15); cout << "　＝　　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　　　＝＝　　　　"; SetColor(9, 15); cout << "÷" << endl;	// 10
		cout << "÷　　　　　　　　　　"; SetColor(11, 15); cout << "＝　　＝　　＝　"; SetColor(14, 15); cout << "　＝　＝　　　　"; SetColor(0, 15); cout << "　　　＝＝　　　　"; SetColor(9, 15); cout << "÷" << endl;	// 11
		cout << "＝　　　　　　　　　　　　　　　　　　"; SetColor(14, 15); cout << "　　＝＝＝＝　　"; SetColor(0, 15); cout << "　＝＝＝＝＝　　　"; SetColor(9, 15); cout << "＝" << endl;	// 12
		cout << "＝　　　　　　　　　　"; SetColor(11, 15); cout << "＝　　＝　　＝　"; SetColor(14, 15); cout << "　＝　　　　　　"; SetColor(0, 15); cout << "＝　＝＝　＝　　　"; SetColor(9, 15); cout << "＝" << endl;	// 13
		cout << "＝　　　　　　"; SetColor(11, 15); cout << "　＝　　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　＝　　＝　　　　"; SetColor(9, 15); cout << "＝" << endl;	// 14
	}
	else if (_monsterName == "発　切")
	{
		SetColor(9, 15);

		cout << "÷　　　　　　　　　　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　　　　＝　　　　"; SetColor(9, 15); cout << "÷" << endl;	// 9
		cout << "÷　　　　　　　"; SetColor(11, 15); cout << "＝　　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　　　＝＝＝　　　"; SetColor(9, 15); cout << "÷" << endl;	// 10
		cout << "÷　　　　　　　　　　"; SetColor(11, 15); cout << "＝　　＝　　＝　　"; SetColor(14, 15); cout << "＝　＝　　　　"; SetColor(0, 15); cout << "　　　＝＝　　　　"; SetColor(9, 15); cout << "÷" << endl;	// 11
		cout << "＝　　　　　　　　　　　　　　　　　　　"; SetColor(14, 15); cout << "　＝＝＝＝　　"; SetColor(0, 15); cout << "＝＝＝＝＝＝＝　　"; SetColor(9, 15); cout << "＝" << endl;	// 12
		cout << "＝　　　　　　　　　　"; SetColor(11, 15); cout << "＝　　＝　　＝　　"; SetColor(14, 15); cout << "＝　　　　　　"; SetColor(0, 15); cout << "　　＝＝　　　　　"; SetColor(9, 15); cout << "＝" << endl;	// 13
		cout << "＝　　　　　　　"; SetColor(11, 15); cout << "＝　　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　＝　＝　　　　　"; SetColor(9, 15); cout << "＝" << endl;	// 14
	}

}


void monsterBase::MonsterDefeat1()
{
	if (_monsterName == "据周戚")
	{
		SetColor(9, 15);

		cout << "÷　　　　　　　　　　　　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　＝＝　　　　"; SetColor(9, 15); cout << "÷" << endl;	// 9
		cout << "÷　　　　　　　　　　　　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　＝＝　　　　"; SetColor(9, 15); cout << "÷" << endl;	// 10
		cout << "÷　　　　　　　　　　　　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "＝＝　　＝　　"; SetColor(9, 15); cout << "÷" << endl;	// 11
		cout << "＝　　　　　　　　　　　　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　　＝＝　　　"; SetColor(9, 15); cout << "＝" << endl;	// 12
		cout << "＝　　　　　　　　　　　　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　　＝　　　　"; SetColor(9, 15); cout << "＝" << endl;	// 13
		cout << "＝　　　　　　　　　　　　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　＝　＝　　　"; SetColor(9, 15); cout << "＝" << endl;	// 14
	}
	else if (_monsterName == "酵　巣")
	{
		SetColor(9, 15);

		cout << "÷　　　　　　　　　　　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　＝＝　　　　　"; SetColor(9, 15); cout << "÷" << endl;	// 9
		cout << "÷　　　　　　　　　　　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "＝＝　　　　　　"; SetColor(9, 15); cout << "÷" << endl;	// 10
		cout << "÷　　　　　　　　　　　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "＝＝＝＝　　　　"; SetColor(9, 15); cout << "÷" << endl;	// 11
		cout << "＝　　　　　　　　　　　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　＝＝＝　＝　　"; SetColor(9, 15); cout << "＝" << endl;	// 12
		cout << "＝　　　　　　　　　　　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　　＝＝＝＝　　"; SetColor(9, 15); cout << "＝" << endl;	// 13
		cout << "＝　　　　　　　　　　　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　　　＝＝　　　"; SetColor(9, 15); cout << "＝" << endl;	// 14
	}
	else if (_monsterName == "偽　紫")
	{
		SetColor(9, 15);

		cout << "÷　　　　　　　　　　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　＝＝　　　　　　"; SetColor(9, 15); cout << "÷" << endl;	// 9
		cout << "÷　　　　　　　　　　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "＝＝＝　　　　　　"; SetColor(9, 15); cout << "÷" << endl;	// 10
		cout << "÷　　　　　　　　　　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "＝＝　　　　　　　"; SetColor(9, 15); cout << "÷" << endl;	// 11
		cout << "＝　　　　　　　　　　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　＝　　　　　　　"; SetColor(9, 15); cout << "＝" << endl;	// 12
		cout << "＝　　　　　　　　　　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　　＝＝＝　　＝　"; SetColor(9, 15); cout << "＝" << endl;	// 13
		cout << "＝　　　　　　　　　　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　　　　　＝＝　　"; SetColor(9, 15); cout << "＝" << endl;	// 14
	}
	else if (_monsterName == "娯掬走")
	{
		SetColor(9, 15);

		cout << "÷　　　　　　　　　　　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "＝＝＝＝＝　　　"; SetColor(9, 15); cout << "÷" << endl;	// 9
		cout << "÷　　　　　　　　　　　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "＝＝＝＝＝＝　　"; SetColor(9, 15); cout << "÷" << endl;	// 10
		cout << "÷　　　　　　　　　　　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　＝＝＝＝＝　　"; SetColor(9, 15); cout << "÷" << endl;	// 11
		cout << "＝　　　　　　　　　　　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "＝　＝＝＝＝　　"; SetColor(9, 15); cout << "＝" << endl;	// 12
		cout << "＝　　　　　　　　　　　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　　　＝＝　　　"; SetColor(9, 15); cout << "＝" << endl;	// 13
		cout << "＝　　　　　　　　　　　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　　＝　　　　　"; SetColor(9, 15); cout << "＝" << endl;	// 14
	}
	else if (_monsterName == "姶唇切")
	{
		SetColor(9, 15);

		cout << "÷　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　"; SetColor(9, 15); cout << "÷" << endl;	// 9
		cout << "÷　　　　　　　　　　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　　　＝＝　　　　"; SetColor(9, 15); cout << "÷" << endl;	// 10
		cout << "÷　　　　　　　　　　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　　　＝＝　　　　"; SetColor(9, 15); cout << "÷" << endl;	// 11
		cout << "＝　　　　　　　　　　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　＝＝＝＝＝　　　"; SetColor(9, 15); cout << "＝" << endl;	// 12
		cout << "＝　　　　　　　　　　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "＝　＝＝　＝　　　"; SetColor(9, 15); cout << "＝" << endl;	// 13
		cout << "＝　　　　　　　　　　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　＝　　＝　　　　"; SetColor(9, 15); cout << "＝" << endl;	// 14
	}
	else if (_monsterName == "発　切")
	{
		SetColor(9, 15);

		cout << "÷　　　　　　　　　　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　　　　＝　　　　"; SetColor(9, 15); cout << "÷" << endl;	// 9
		cout << "÷　　　　　　　　　　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　　　＝＝＝　　　"; SetColor(9, 15); cout << "÷" << endl;	// 10
		cout << "÷　　　　　　　　　　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　　　＝＝　　　　"; SetColor(9, 15); cout << "÷" << endl;	// 11
		cout << "＝　　　　　　　　　　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "＝＝＝＝＝＝＝　　"; SetColor(9, 15); cout << "＝" << endl;	// 12
		cout << "＝　　　　　　　　　　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　　＝＝　　　　　"; SetColor(9, 15); cout << "＝" << endl;	// 13
		cout << "＝　　　　　　　　　　　　　　　　　　　　　　　　　　"; SetColor(0, 15); cout << "　＝　＝　　　　　"; SetColor(9, 15); cout << "＝" << endl;	// 14
	}
}
void monsterBase::MonsterDefeat2()
{
	SetColor(9, 15);

	cout << "÷　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　÷" << endl;	// 9
	cout << "÷　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　÷" << endl;	// 10
	cout << "÷　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　÷" << endl;	// 11
	cout << "＝　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　＝" << endl;	// 12
	cout << "＝　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　＝" << endl;	// 13
	cout << "＝　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　＝" << endl;	// 14
}
void monsterBase::MonsterGetDamaged(int dmg)
{
	_monsterHp = _monsterHp - dmg;
}

void monsterBase::SetColor(int color, int bgcolor)
{
	bgcolor &= 0xf;
	color &= 0xf;

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color | (bgcolor << 4));
}