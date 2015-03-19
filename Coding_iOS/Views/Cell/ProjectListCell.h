//
//  ProjectListCell.h
//  Coding_iOS
//
//  Created by 王 原闯 on 14-8-11.
//  Copyright (c) 2014年 Coding. All rights reserved.
//

#define kCellIdentifier_ProjectList @"ProjectListCell"

#import <UIKit/UIKit.h>
#import "Projects.h"

@interface ProjectListCell : UITableViewCell
@property (nonatomic, strong) Project *project;

+ (CGFloat)cellHeight;

@end
