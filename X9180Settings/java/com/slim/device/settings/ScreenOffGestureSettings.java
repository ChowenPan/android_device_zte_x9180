package com.slim.device.settings;

import android.content.Context;
import android.os.Bundle;
import android.preference.ListPreference;
import android.preference.Preference;
import android.preference.PreferenceActivity;
import android.preference.PreferenceCategory;
import android.provider.Settings;

import android.hardware.CmHardwareManager;
import static android.hardware.CmHardwareManager.FEATURE_TAP_TO_WAKE;

import com.slim.device.R;

public class ScreenOffGestureSettings extends PreferenceActivity implements Preference.OnPreferenceChangeListener {

    ListPreference dt2w_screen;
    ListPreference dt2w_left;
    ListPreference dt2w_middle;
    ListPreference dt2w_right;

    @Override
    public void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        addPreferencesFromResource(R.xml.gesture_panel);
        PreferenceCategory ambientDisplay =
            (PreferenceCategory) findPreference("ambient_display_key");
        ambientDisplay.setEnabled(isDozeEnabled());

        dt2w_screen = (ListPreference)findPreference("dt2w_screen_policy");
        dt2w_screen.setOnPreferenceChangeListener(this);

        dt2w_left = (ListPreference)findPreference("dt2w_left_policy");
        dt2w_left.setOnPreferenceChangeListener(this);

        dt2w_middle = (ListPreference)findPreference("dt2w_middle_policy");
        dt2w_middle.setOnPreferenceChangeListener(this);

        dt2w_right = (ListPreference)findPreference("dt2w_right_policy");
        dt2w_right.setOnPreferenceChangeListener(this);
        
        String value = null;

        value = Settings.System.getString(getContentResolver(), "dt2w_screen_policy");
        if(value != null)
            dt2w_screen.setValue(value);

        value = Settings.System.getString(getContentResolver(), "dt2w_left_policy");
        if(value != null)
            dt2w_left.setValue(value);

        value = Settings.System.getString(getContentResolver(), "dt2w_middle_policy");
        if(value != null)
            dt2w_middle.setValue(value);

        value = Settings.System.getString(getContentResolver(), "dt2w_right_policy");
        if(value != null)
            dt2w_right.setValue(value);
            
        CmHardwareManager cmHardwareManager =
            (CmHardwareManager) getSystemService(Context.CMHW_SERVICE);

        PreferenceCategory dt2w =
            (PreferenceCategory) findPreference("dt2w");
        dt2w.setEnabled(cmHardwareManager.get(FEATURE_TAP_TO_WAKE));
    }

    @Override
    protected void onResume() {
        super.onResume();
        getListView().setPadding(0, 0, 0, 0);
    }

    private boolean isDozeEnabled() {
        return Settings.Secure.getInt(getContentResolver(),
                Settings.Secure.DOZE_ENABLED, 1) != 0;
    }

    @Override
    public boolean onPreferenceChange(Preference preference, Object newValue)
    {
        switch(preference.getKey()) {
            case "dt2w_screen_policy":
            case "dt2w_left_policy":
            case "dt2w_middle_policy":
            case "dt2w_right_policy":
                Settings.System.putString(getContentResolver(), preference.getKey(), (String)newValue);
                break;
            default:
                break;
        }
        return true;
    }
}
