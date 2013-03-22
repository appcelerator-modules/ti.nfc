package ti.nfc.api;

import android.net.Uri;
import android.nfc.NdefRecord;

public class NdefRecordApi16 extends NdefRecordApi {

	@Override
	public NdefRecord createApplication(String packageName) {
		return NdefRecord.createApplicationRecord(packageName);
	}

	@Override
	public NdefRecord createUri(Uri uri) {
		return NdefRecord.createUri(uri);
	}

	@Override
	public NdefRecord createMime(String mimeType, byte[] mimeData) {
		return NdefRecord.createMime(mimeType, mimeData);
	}

	@Override
	public NdefRecord createExternal(String domain, String type,
			byte[] data) {
		return NdefRecord.createExternal(domain, type, data);
	}
}
