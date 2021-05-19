//
//  ViewController.swift
//  ObjCBridgeHeader
//
//  Created by Goutham Meesala on 4/22/21.
//

import UIKit

class ViewController: UIViewController {

    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view.
        
        let _class = SomeObjcClass()
        _class.someValue = 20
        _class.logValue(30)
    }


}

