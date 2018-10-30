#include <stdio.h>
#include "module/network/network.h"


// 快递服务模块

// 运输 sql 语句
char* express_transport_sql(char *sql){

    network_socket_connect();

    return sql;
}



// 打电话给快递公司并把sql给快递公司
char* express_call(char *sql){

    return express_transport_sql(sql);
}



