package org.cocos2dx;

import android.app.Activity;
import android.os.Bundle;

import com.MyCompany.MyGame.R;

/**
 * Created by fish on 2019/2/20.
 * yuxm_zju@aliyun.com
 */
public class AActivity extends Activity{
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.aa);
    }

    public String getScene(){
        return "A";
    }
}
