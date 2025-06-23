import matplotlib.pyplot as plt

# 한글을 이미지로 출력하여 PDF에 삽입
text = """
단축키 설명

[마우스 조작]
- 우클릭 + 드래그: 화면 돌리기
- 마우스 휠 클릭 + 위아래 드래그: 위아래로 움직이기
- 마우스 휠 돌리기: 시점 거리 이동

[마우스 클릭]
- 벽에 좌클릭: 클릭한 층 선택
- 벽에 더블 좌클릭: 클릭한 한 층으로 시점 이동

[방향키]
- ↑ 방향키: 위 층 선택
- ↓ 방향키: 아래 층 선택
- ← 방향키: 왼쪽 스테이지 선택
- → 방향키: 오른쪽 스테이지 선택

[블록 선택]
- N 키: Normal 블록 선택
- F 키: FullCollision 블록 선택

[스테이지 관리]
- + 키: 스테이지 추가
- - 키: 현재 선택된 스테이지 제거

[기타 기능]
- 스페이스 바: 선택된 층으로 시점 이동
- Ctrl + S: 저장
- Ctrl + Z: 되돌리기
- Ctrl + Y: 되돌린 거 다시 실행하기
"""

# 이미지로 저장
fig, ax = plt.subplots(figsize=(8.27, 11.69))  # A4 size in inches
ax.text(0.05, 0.95, text, fontsize=12, va='top', ha='left', wrap=True, family='Malgun Gothic')
ax.axis('off')

image_path = "./단축키_설명_텍스트.png"
fig.savefig(image_path, bbox_inches='tight', dpi=300)
plt.close(fig)

# 이미지로 PDF 생성
from fpdf import FPDF
pdf = FPDF(orientation='P', unit='mm', format='A4')
pdf.add_page()
pdf.image(image_path, x=10, y=10, w=190)

pdf_output_path = "./단축키_설명_텍스트_이미지기반.pdf"
pdf.output(pdf_output_path)

pdf_output_path
