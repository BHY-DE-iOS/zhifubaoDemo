//
//  ViewController.h
//  zhifubaoDemo
//
//  Created by mac on 16/3/23.
//  Copyright © 2016年 maimaihui. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface Product : NSObject{
@private
    float     _price;
    NSString *_subject;
    NSString *_body;
    NSString *_orderId;
}

@property (nonatomic, assign) float price;
@property (nonatomic, copy) NSString *subject;
@property (nonatomic, copy) NSString *body;
@property (nonatomic, copy) NSString *orderId;

@end

@interface ViewController : UIViewController


@end

