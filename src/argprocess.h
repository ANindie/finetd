//
//  argprocess.h
//  finetd
//
//  Created by Shakthi Prasad G S on 17/07/22.
//  Copyright © 2022 Shakthi Prasad G S. All rights reserved.
//

#ifndef argprocess_h
#define argprocess_h
struct InetServicesDefintion;
void processArgs(int argc,  char *argv[],struct InetServicesDefintion ** allService,int * totalServices,int * loglevel);
#include <stdio.h>

#endif /* argprocess_h */
