package org.cocos2dx;

import android.os.Bundle;

import org.cocos2dx.lib.Cocos2dxActivity;

/**
 * Created by fish on 2019/2/20.
 * yuxm_zju@aliyun.com
 */
public class AppBActivity extends Cocos2dxActivity {
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.setEnableVirtualButton(false);
        super.onCreate(savedInstanceState);
        // Workaround in https://stackoverflow.com/questions/16283079/re-launch-of-activity-on-home-button-but-only-the-first-time/16447508
        if (!isTaskRoot()) {
            // Android launched another instance of the root activity into an existing task
            //  so just quietly finish and go away, dropping the user back into the activity
            //  at the top of the stack (ie: the last state of this task)
            // Don't need to finish it again since it's finished in super.onCreate .
            return;
        }

        // DO OTHER INITIALIZATION BELOW

    }


    public String getScene(){
        return "B";
    }
}
