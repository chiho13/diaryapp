//
//  THEntryCell.h
//  Diary
//
//  Created by Ash Furrow on 3/11/14.
//  Copyright (c) 2014 Treehouse. All rights reserved.
//

#import <UIKit/UIKit.h>

@class THDiaryEntry;

@interface THEntryCell : UITableViewCell

+ (CGFloat)heightForEntry:(THDiaryEntry *)entry;

- (void)configureCellForEntry:(THDiaryEntry *)entry;

@end
