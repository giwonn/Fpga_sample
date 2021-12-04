package com.example.android.fpga_sample;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {



    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        // Example of a call to a native method
        TextView tv = (TextView) findViewById(R.id.sample_text);
        tv.setText(Integer.toString(ReceiveFPGAvalue()));
    }

    /**
     * A native method that is implemented by the native library,
     * which is packaged with this application.
     */
    public native int ReceiveFPGAvalue();

    // Used to load the 'fpga-sample-jni' library on application startup.
    static {
        System.loadLibrary("fpga-sample-jni");
    }
}
