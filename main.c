#include "process.h"
#include "action.h"
#include "work_with_memory.h"


int main(int argc,char*argv[])
{
    if(work_with_arg(argc,argv) == 'd')
    {
    make_arr();
    debug();
    }
    else
    {
    make_arr();
    realese();
    }
    del_arr();
}

