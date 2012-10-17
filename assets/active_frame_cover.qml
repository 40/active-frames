import bb.cascades 1.0

Container {
    objectName: "mainContainer"
    layout: DockLayout {
    }
    ImageView {
        imageSource: "asset:///images/picture1.png"
        verticalAlignment: VerticalAlignment.Center
        horizontalAlignment: HorizontalAlignment.Center
    }
    Label {
        objectName: "label"
        text: "AF is refreshed by BB10 every 30sec"
        multiline: true
        verticalAlignment: VerticalAlignment.Top
        horizontalAlignment: HorizontalAlignment.Left
        textStyle.fontSize: FontSize.XSmall
    }
    Label {
            objectName: "label2"
            text: "0"
            multiline: true
            horizontalAlignment: HorizontalAlignment.Center
            verticalAlignment: VerticalAlignment.Bottom
            textStyle.fontSize: FontSize.XLarge
        }
}
