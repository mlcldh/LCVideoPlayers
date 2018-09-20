//
//  ViewController.m
//  LCVideoPlayers
//
//  Created by MengLingChao on 2018/9/20.
//  Copyright © 2018年 MengLingChao. All rights reserved.
//

#import "ViewController.h"
#import "Masonry.h"

@interface ViewController ()<UITableViewDelegate,UITableViewDataSource>

@property (nonatomic,strong) NSArray *playerNames;//
@property (nonatomic,strong) UITableView *tableView;//

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    [self tableView];
}
- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}
#pragma mark - Getter
- (NSArray *)playerNames {
    if (!_playerNames) {
        _playerNames = @[@"IJK",@"ARCPlayer",@"CCSDK",@"EM"];
    }
    return _playerNames;
}
- (UITableView *)tableView {
    if (! _tableView) {
        _tableView = [[UITableView alloc]initWithFrame:CGRectZero style:(UITableViewStylePlain)];
        //        _tableView = [[UITableView alloc]initWithFrame:CGRectZero style:(UITableViewStyleGrouped)];
//        _tableView.backgroundColor = [UIColor purpleColor];
        _tableView.estimatedRowHeight = 44.0f;
        //        _tableView.rowHeight = UITableViewAutomaticDimension;
        //        _tableView.keyboardDismissMode = UIScrollViewKeyboardDismissModeOnDrag;
        _tableView.delegate = self;
        _tableView.dataSource = self;
        [self.view addSubview:_tableView];
        [_tableView mas_makeConstraints:^(MASConstraintMaker *make) {
            make.left.right.bottom.equalTo(self.view);
            make.top.equalTo(self.view);
        }];
    }
    return _tableView;
}
#pragma mark - UITableViewDataSource
- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section {
    return self.playerNames.count;
}
- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath {
    NSString *identifier = @"identifier";
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:identifier];
    if (cell == nil) {
        cell = [[UITableViewCell alloc]initWithStyle:(UITableViewCellStyleDefault) reuseIdentifier:identifier];
    }
    NSString *playerName = self.playerNames[indexPath.row];
    cell.textLabel.text = playerName;
    
    return cell;
}

@end
