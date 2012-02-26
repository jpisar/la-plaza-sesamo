//
//  ThirdViewController.h
//  Buses2
//
//  Created by amqafrjs on 2/18/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MapKit/MapKit.h>

@interface ViewController : UIViewController{
    MKMapView *map; 
}
@property (nonatomic,retain) IBOutlet MKMapView *map;
-(IBAction) setMap:(id)sender;
@end
