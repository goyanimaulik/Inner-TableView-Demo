//
//  ViewController.h
//  Inner TableView Demo
//
//  Created by Maulik on 27/07/18.
//  Copyright © 2018 maulik.goyani. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>

@property (weak, nonatomic) IBOutlet UITableView *MainTableView;

@end

