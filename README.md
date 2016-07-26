# NetworkManager
基于AFNetworking 简单封装接口调用

# NetworkManager 使用
NSString *urlPath = [NSString stringWithFormat:@"index.php/Sharp/surveyList/page/%d",1];
NetworkManager *ma = [[NetworkManager alloc] init];
[ma GET:urlPath parameters:nil completion:^(id data, NSError *error){
    if (!error) {
        // 成功处理
    } else {
        // 失败处理
    }
}];
