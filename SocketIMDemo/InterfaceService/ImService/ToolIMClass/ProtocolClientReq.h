//
//  ProtocolClientReq.h
//  SocketIMDemo
//
//  Created by 李勇 on 18/3/15.
//  Copyright (c) 2018年李勇. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 IMSocketControl收到一个IMSocketReqContext后会构建一个ProtocolClientReq对象，并把ProtocolClientReq对象转换成NSData传给SocketIO进行传输
 */
@interface ProtocolClientReq : NSObject

/**请求唯一标识符*/
@property(nonatomic, assign) int seq;
/**区分user、group、friend、notifation等*/
@property(nonatomic, strong) NSString *cmd;
/**例如user区分login、logout、setinfo等*/
@property(nonatomic, strong) NSString *sub_cmd;
/**应用版本号*/
@property(nonatomic, strong) NSString *version;
/**用户唯一标识符，客户端登录成功后，后面的请求都需要带上此参数*/
@property(nonatomic, assign) int64_t imid;
/**客户端类型*/
@property(nonatomic, assign) E_SOCKET_CLIENT_TYPE source_type;
/**内容 json格式字符串 如cmd为user、sub_cmd为login，则body为UserLoginReq对象的json格式字符串*/
@property(nonatomic, strong) NSString *body;

@end
