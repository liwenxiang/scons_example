/*
 * =====================================================================================
 *
 *       Filename:  t.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2013/09/08 13时53分04秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <iostream>
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
#include "hello_world/util/unit.h"
int main ( int argc, char *argv[] )
{
    Unit x;
    std::cout << x.add(1, 2) << std::endl;
    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
