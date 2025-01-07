# OpenVanilla 輸入法套件

最新版本[由此處下載](https://github.com/openvanilla/openvanilla/releases)

僅以此 README 紀念李士傑 (Shih-Chieh Ilya Li, 1973-2019)。

## 簡介

OpenVanilla 是一套為 Mac 設計的輸入法套件。內建的輸入法包括了倉頡、簡易（速成）、大易、行列、符號與日文假名共五種。使用者可透過偏好設定，匯入其他輸入法的表格，來建立符合自己需要的輸入法。

注音輸入法（包括傳統注音以及自動選字注音）的使用者，可安裝「[小麥注音](http://mcbopomofo.openvanilla.org)」。

## 安裝方式

下載最新版本，瀏覽器解壓縮安裝包後，會看到「安裝 OpenVanilla」的安裝程式。執行安裝程式後，即可從螢幕右上方的輸入法選單（所謂的國旗選單）選取 OpenVanilla。

第一次安裝，預設的輸入法為倉頡。使用者可依需要選取內建輸入法，或是從「OpenVanilla 偏好設定…」中匯入自己所需的輸入法。

## 系統需求

macOS 10.15 Catalina 或更高版本。

## 軟體授權

本專案採用 MIT License 釋出，使用者可自由使用、散播本軟體，惟散播時必須保持軟體完整、不得修改版權文字。[授權全文在此](https://github.com/lukhnos/openvanilla/blob/master/LICENSE.txt)。

## 卸載方式

要卸載 OpenVanilla，請在 Finder 視窗中按著  鍵 (Command 鍵) 不放，繼續按 Shift 鍵和 G 鍵 (Cmd-Shift-G)，這時會出現對話框，打入 `~/Library/Input Methods/` 按下 Enter 鍵，這時會跳出一個資料夾，將裡面的 `OpenVanilla` 檔拖入垃圾桶，登出目前帳號再登入即可。

## 線上論壇

有使用上的問題，可在 OpenVanilla 的 [Google Groups 線上論壇](https://groups.google.com/forum/?fromgroups/openvanilla#!forum/openvanilla)上提出。

## 常見問題

### Q: 注音輸入法要去哪裡安裝？

小麥注音是 OpenVanilla 作者群開發的新輸入法，提供自動選字的注音（類似微軟新注音或漢音）以及俗稱「ㄅ半」的傳統注音。小麥注音可從[此處](http://mcbopomofo.openvanilla.org)取得。

### Q: 舊版安裝程式要去哪邊找？

OpenVanilla 的歷來版本都可從[GitHub的釋出版本頁面](https://github.com/openvanilla/openvanilla/releases)找到。要注意的是，1.0 之前的舊版，由於年代久遠，不保證能在現在的 macOS 上正確安裝，請參閱各版本的釋出說明。

### Q: 如何取得其他輸入法表格？

常用的輸入法表格可從 OpenVanilla 的[原始碼網站](https://github.com/lukhnos/openvanilla/tree/master/DataTables)下載，例如[大字集的倉頡](https://raw.github.com/lukhnos/openvanilla/master/DataTables/cj-ext.cin)、[粵語拼音](https://raw.github.com/lukhnos/openvanilla/master/DataTables/jyutping.cin)、[電信碼](https://raw.github.com/lukhnos/openvanilla/master/DataTables/telecode.cin)、[五筆](https://raw.github.com/lukhnos/openvanilla/master/DataTables/wubizixing.cin)等。

（註：粵拼自 OpenVanilla 1.3.0 開始內建，同時內建有調號及無調號兩種版本。）

### Q: 如何匯入輸入法表格？

將 OpenVanilla 輸入法選單拉下來，選「OpenVanilla 偏好設定…」，然後選「加入新輸入法」，按「匯入…」按鈕，然後選取下載來的 .cin 檔案就可以了。

### Q: 如何製作自己的 .cin 輸入法表格檔？

請參考這份[舊文件](CinHowTo.markdown)。請注意文件內容已經有許多地方過時。OpenVanilla 1.0 版不再需要使用者自行複製檔案到特定目錄（目錄也已經改名），現在從偏好設定就可以加入或移除自訂的輸入法了。

### Q: 其他非表格類的輸入法，要去哪裡取得？

以下是一些 OpenVanilla 過去支援，從 1.0 開始不再提供的輸入法，以及替代方案：

* 注音輸入法（自動選字注音及傳統注音）：請下載[小麥注音](http://mcbopomofo.openvanilla.org)
* 藏文輸入法：macOS 已經內建
* POJ: 請使用[意傳台文輸入法](https://sujiphuat.ithuan.tw/)、[信望愛台語客語輸入法](http://taigi.fhl.net/TaigiIME/)或[教育部臺灣閩南語漢字輸入法](https://language.moe.gov.tw/result.aspx?classify_sn=23&subclassify_sn=442&content_sn=28)；這三套輸入法都有 Mac 版本

另外，嘸蝦米輸入法的使用者，請前往[嘸蝦米官方網站](http://boshiamy.com)取得 Mac 版本。

### Q: 輸入法在有的程式可以用，有的程式卻顯示灰色的圖示，怎麼辦？

這可能是 macOS 的 bug。要解決此問題，請先完全卸載 OpenVanilla（卸載方式請參考上面），重新登入後，再重新安裝一次 OpenVanilla。

<a id="why-logout-is-needed"></a>

### Q: 要如何參與開發？

OpenVanilla 是開放原始碼的計畫，歡迎從 [GitHub](https://github.com/lukhnos/openvanilla/) 取得原始碼。

有開發上的疑問，歡迎透過 GitHub 的[追蹤系統](https://github.com/lukhnos/openvanilla/issues)或 [Google Groups 論壇](https://groups.google.com/forum/?fromgroups/openvanilla#!forum/openvanilla)回報。

### Q: 要如何從原始碼建立 OpenVanilla 執行檔？

請先至 GitHub 取得 [OpenVanilla 原始碼](https://github.com/lukhnos/openvanilla)，並安裝最新版的 [Xcode](https://itunes.apple.com/us/app/xcode/id497799835?mt=12)。打開其中的 `OpenVanilla.xcodeproj` 計畫檔，在 Xcode 內選擇 Build 指令就可以編譯出 `OpenVanilla.app`。要注意的是這個 target 並不會自動安裝輸入法（因此不會覆蓋你現有的版本）。如果要安裝輸入法，可另行 build `OpenVanillaInstaller` 這個 target（會自動 build 其相依的 `OpenVanilla` target），然後執行 installer 就可以安裝了。

### Q: 為什麼叫 OpenVanilla?

OpenVanilla 的前身是一個名叫 VanillaInput 的輸入法軟體，原先 (2004年時) 設計來取代 macOS 內建的傳統注音。

由於 macOS 內建的倉頡輸入法當時有許多與習慣不合處，VanillaInput 後來加入了倉頡輸入法。之後幾個朋友一起擴充了這個架構，變成可以用來開發新輸入法的軟體專案。

因為是開放原始碼的計畫，又採取開放架構，因此稱之為 OpenVanilla。雖然一般俗稱「香草輸入法」，但 OpenVanilla 本身並不是一套輸入法，而是用來提供像倉頡、簡易等輸入法的套件，因此本站通稱 OpenVanilla。

### Q: 有使用上的問題，要去哪裡問？

OpenVanilla 的 [Google Groups 線上論壇](https://groups.google.com/forum/?fromgroups/openvanilla#!forum/openvanilla)。
