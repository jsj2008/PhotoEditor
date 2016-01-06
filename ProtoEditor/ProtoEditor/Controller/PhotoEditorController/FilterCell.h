//
//  FilterCell.h
//  ProtoEditor
//
//  Created by Bao (Brian) L. LE on 1/6/16.
//  Copyright © 2016 Brian. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FilterCell : UICollectionViewCell
@property (weak, nonatomic) IBOutlet UIImageView *imageFilter;
@property (weak, nonatomic) IBOutlet UILabel *labelFilter;
@property (weak, nonatomic) IBOutlet UIActivityIndicatorView *activityLoading;

- (void)loadImageWithType:(NSInteger)typeFilter andText:(NSString *)nameFilter;

@end
