class HomeScreen extends StatelessWidget {
  WebViewController? controller;

  HomeScreen({super.key});

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: Text('텍스트'),
        actions: [
          IconButton(
              onPressed: (){
                if(controller == null) {
                  return;
                }
                controller!.loadUrl('홈페이지 URL');
              },
              icon: Icon(
                Icons.home,
              ),
          ),
        ],
      ),
      body: WebView(
        onWebViewCreated: (WebViewController controller){
          this.controller = controller;
        },
        initialUrl: '홈페이지 URL',
        javascriptMode: JavascriptMode.unrestricted,
      )
    );
  }
}
