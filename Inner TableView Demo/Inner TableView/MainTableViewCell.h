//
//  MainTableViewCell.h
//  Inner TableView Demo
//
//  Created by Maulik on 27/07/18.
//  Copyright © 2018 maulik.goyani. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MainTableViewCell : UITableViewCell <UICollectionViewDelegate, UICollectionViewDataSource>

@property (weak, nonatomic) IBOutlet UICollectionView *SubCollectionView;

@end
