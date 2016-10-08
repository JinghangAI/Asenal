#ifndef __STY_H
#define __STY_H

#include <iostream> 
#include <cstdio> 
#include <algorithm> 
#include <cstring> 
#include <string>
#include <cmath> 
#include <vector> 
#include <queue> 
#include <map>
#include <ctime>
#include <set>
#include <cstdio>
#include <cstdlib>
#include <time.h>
#include "xdebug.h"


enum Status {
  kS = 0, // 未感染
  kI = 1, // 感染
  kR = 2, // 康复
};

/*
 * 是否被接种过
 */
enum Vcn {
  kNo = 0,
  kYes = 1,
};

/*
 * 注射疫苗是否成功
 */
enum Vs {
  kFail = 0,
  kSucc = 1,
};

// global variable

/*
 * 疫苗有效率
 */
double ir = 0.7;


/*
 * 疾病信息的播报率
 */
double a = 0.2;

/*
 * 疫苗信息的播报率
 */
double b = 0.7;
#endif